#pragma once

#include <string>
#include <unordered_map>
#include "monitor/monitor_inter.h"
#include "Monitor_Info.grpc.pb.h"
#include "Monitor_Info.pb.h"

namespace monitor
{
    class CpuStatMonitor : public MonitorInter
    {
        struct CpuStat
        {
            std::string cpu_name;
            float user;
            float system;
            float idle;
            float nice;
            float io_wait;
            float irq;
            float sort_irq;
            float steal;
            float guest;
            float guest_nice;
        };

    public:
        CpuStatMonitor() {}
        void UpdateOnce(monitor::MonitorInfo *monitorInfo);
        void Stop() override {}

    private:
        std::unordered_map<std::string, CpuStat> _cpu_stat_map;
    };
} // end of namespace monitor