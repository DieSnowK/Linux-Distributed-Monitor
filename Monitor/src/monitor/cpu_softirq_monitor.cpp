#include "monitor/cpu_softirq_monitor.h"
#include "utils/utils.h"

namespace monitor
{
    void CpuSoftIrqMonitor::UpdateOnce(monitor::MonitorInfo *monitorInfo)
    {
        Utils::ReadFile softirqs_file("/proc/softirqs");
        std::vector<std::string> one_softirq;
        std::vector<std::vector<std::string>> softirq;

        while(softirqs_file.ReadLine(&one_softirq))
        {
            softirq.push_back(one_softirq);
            one_softirq.clear();
        }

        // maybe missing a cpu
        for (int i = 0; i < softirq[0].size() - 1; ++i) // TODO why - 1? experenice myself later
        {
            std::string name = softirq[0][i];
            SoftIrq info;

            info.cpu_name = name;
            info.hi = std::stoll(softirq[1][i + 1]);
            info.timer = std::stoll(softirq[2][i + 1]);
            info.net_tx = std::stoll(softirq[3][i + 1]);
            info.net_rx = std::stoll(softirq[4][i + 1]);
            info.block = std::stoll(softirq[5][i + 1]);
            info.irq_poll = std::stoll(softirq[6][i + 1]);
            info.tasklet = std::stoll(softirq[7][i + 1]);
            info.sched = std::stoll(softirq[8][i + 1]);
            info.hrtimer = std::stoll(softirq[9][i + 1]);
            info.rcu = std::stoll(softirq[10][i + 1]);
            info.timePoint = boost::chrono::steady_clock::now();

            auto iter = _cpu_softirq_map.find(name);
            if(iter != _cpu_softirq_map.end())
            {
                SoftIrq &old = iter->second;
                double period = Utils::SteadyTimeSecond(info.timePoint, old.timePoint);

                auto one_softirq_msg = monitorInfo->add_soft_irq();
                one_softirq_msg->set_cpu(info.cpu_name);
                one_softirq_msg->set_hi((info.hi - old.hi) / period);
                one_softirq_msg->set_timer((info.timer - old.timer) / period);
                one_softirq_msg->set_net_tx((info.net_tx - old.net_tx) / period);
                one_softirq_msg->set_net_rx((info.net_rx - old.net_rx) / period);
                one_softirq_msg->set_block((info.block - old.block) / period);
                one_softirq_msg->set_irq_poll((info.irq_poll - old.irq_poll) / period);
                one_softirq_msg->set_tasklet((info.tasklet - old.tasklet) / period);
                one_softirq_msg->set_sched((info.sched - old.sched) / period);
                one_softirq_msg->set_hrtimer((info.hrtimer - old.hrtimer) / period);
                one_softirq_msg->set_rcu((info.rcu - old.rcu) / period);
            }

            _cpu_softirq_map[name] = info;
        } // end of for (int i = 0; i < softirq[0].size() - 1; ++i)
    }
} // end of namespace monitor