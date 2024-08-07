#pragma once

#include <string>
#include <unordered_map>
#include <boost/chrono.hpp>
#include "monitor/monitor_inter.h"
#include "Monitor_Info.grpc.pb.h"
#include "Monitor_Info.pb.h"

namespace monitor
{
    class NetMonitor : public MonitorInter
    {
        struct NetInfo
        {
            std::string name;
            int64_t rcv_bytes;
            int64_t rcv_packets;
            int64_t err_in;
            int64_t drop_in;
            int64_t snd_bytes;
            int64_t snd_packets;
            int64_t err_out;
            int64_t drop_out;
            boost::chrono::steady_clock::time_point timePoint;
        };

    public:
        NetMonitor() {}
        void UpdateOnce(monitor::MonitorInfo *monitorInfo);
        void Stop() override {}

    private:
        std::unordered_map<std::string, NetInfo> _net_info_map;
    };

} // end of namespace monitor