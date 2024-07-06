#include "monitor/cpu_softirq_monitor.h"
#include "utils/utils.h"

namespace monitor
{
    void CpuSoftIrqMonitor::UpdateOnce(monitor::MonitorInfo *monitorInfo)
    {
        Utils::ReadFile softirqs_file("/proc/softirqs");
        std::vector<std::string> one_softirq;
        
    }
} // end of namespace monitor