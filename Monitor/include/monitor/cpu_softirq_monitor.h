#pragma once

#include <string>
#include <unordered_map>
#include <boost/chrono.hpp>
#include "monitor/monitor_inter.h"
#include "Monitor_Info.grpc.pb.h"
#include "Monitor_Info.pb.h"

namespace monitor
{
    class CpuSoftIrqMonitor : public MonitorInter
    {
        struct SoftIrq
        {
            std::string cpu_name;
            int64_t hi;
            int64_t timer;
            int64_t net_tx;
            int64_t net_rx;
            int64_t block;
            int64_t irq_poll;
            int64_t tasklet;
            int64_t sched;
            int64_t hrtimer;
            int64_t rcu;
            boost::chrono::steady_clock::time_point timePoint;
        };

    public:
        CpuSoftIrqMonitor() {}
        void UpdateOnce(monitor::MonitorInfo *monitorInfo);
        void Stop() override {}

    private:
        std::unordered_map<std::string, SoftIrq> _cpu_softirq_map;
    };
} // end of namespace monitor