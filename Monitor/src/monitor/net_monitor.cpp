#include "monitor/net_monitor.h"
#include "utils/utils.h"

namespace monitor
{
    void NetMonitor::UpdateOnce(monitor::MonitorInfo* monitorInfo)
    {
        Utils::ReadFile net_file("/proc/net/dev");
        std::vector<std::string> net_datas;

        while(net_file.ReadLine(&net_datas))
        {
            std::string name = net_datas[0];

            if(name.find(":") == name.size() - 1 && net_datas.size() >= 10)
            {
                NetInfo net_info;
                name.pop_back();
                net_info.name = name;
                net_info.timePoint = boost::chrono::steady_clock::now();

                net_info.rcv_bytes = std::stoll(net_datas[1]);
                net_info.rcv_packets = std::stoll(net_datas[2]);
                net_info.err_in = std::stoll(net_datas[3]);
                net_info.drop_in = std::stoll(net_datas[4]);

                net_info.snd_bytes = std::stoll(net_datas[9]);
                net_info.snd_packets = std::stoll(net_datas[10]);
                net_info.err_out = std::stoll(net_datas[11]);
                net_info.drop_out = std::stoll(net_datas[12]);

                auto iter = _net_info_map.find(name);
                if(iter != _net_info_map.end())
                {
                    NetInfo old = std::move(iter->second);
                    double period = Utils::SteadyTimeSecond(net_info.timePoint, old.timePoint);

                    auto one_net_msg = monitorInfo->add_net_info();
                    one_net_msg->set_name(net_info.name);
                    one_net_msg->set_send_rate((net_info.snd_bytes - old.snd_bytes) / 1024.0 / period);
                    one_net_msg->set_rcv_rate((net_info.rcv_bytes - old.rcv_bytes) / 1024.0 / period);
                    one_net_msg->set_send_packets_rate(
                        (net_info.snd_packets - old.snd_packets) / period);
                    one_net_msg->set_rcv_packets_rate(
                        (net_info.rcv_packets - old.rcv_packets) / period);
                }

                _net_info_map[name] = net_info;
            }

            net_datas.clear();
        }
    }
} // end of namespace monitor