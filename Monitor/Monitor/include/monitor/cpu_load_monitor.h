#pragma once

#include <string>
#include "Monitor_Info.grpc.pb.h"
#include "Monitor_Info.pb.h"
#include "monitor/monitor_inter.h"

namespace monitor
{
    class CpuLoadMonitor : public MonitorInter
    {
    public:
        CpuLoadMonitor() {}
        void UpdateOnce(monitor::MonitorInfo *monitorInfo);
        void Stop() override {} // TODO Think Why?
        
    private:
        float _load_avg_1;
        float _load_avg_3;
        float _load_avg_15;
    };
} // end of namespace monitor