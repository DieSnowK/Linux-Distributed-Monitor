#include "monitor/cpu_load_monitor.h"
#include "utils/utils.h"

namespace monitor
{
    void CpuLoadMonitor::UpdateOnce(monitor::MonitorInfo *monitorInfo)
    {
        Utils::ReadFile cpu_load_file("/proc/loadavg");
        std::vector<std::string> cpu_loads;

        cpu_load_file.ReadLine(&cpu_load);
        _load_avg_1 = stof(cpu_loads[0]);
        _load_avg_3 = stof(cpu_loads[1]);
        _load_avg_15 = stof(cpu_loads[2]);

        auto cpu_load_msg = monitorInfo->mutable_cpu_load();
        cpu_load_msg->set_load_avg_1(_load_avg_1);
        cpu_load_msg->set_load_avg_3(_load_avg_3);
        cpu_load_msg->set_load_avg_15(_load_avg_15);
    }
} // end of namespace monitor