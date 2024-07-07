#include "monitor/cpu_stat_monitor.h"
#include "utils/utils.h"

namespace monitor
{
    void CpuStatMonitor::UpdateOnce(monitor::MonitorInfo* monitorInfo)
    {
        Utils::ReadFile cpu_stat_file("/proc/stat");
        std::vector<std::string> cpu_stat_list;

        while(cpu_stat_file.ReadLine(&cpu_stat_list))
        {
            if(cpu_stat_list[0].find("cpu") != std::string::npos)
            {
                CpuStat cpu_stat;
                cpu_stat.cpu_name = cpu_stat_list[0];
                cpu_stat.user = std::stof(cpu_stat_list[1]);
                cpu_stat.nice = std::stof(cpu_stat_list[2]);
                cpu_stat.system = std::stof(cpu_stat_list[3]);
                cpu_stat.idle = std::stof(cpu_stat_list[4]);
                cpu_stat.io_wait = std::stof(cpu_stat_list[5]);
                cpu_stat.irq = std::stof(cpu_stat_list[6]);
                cpu_stat.soft_irq = std::stof(cpu_stat_list[7]);
                cpu_stat.steal = std::stof(cpu_stat_list[8]);
                cpu_stat.guest = std::stof(cpu_stat_list[9]);
                cpu_stat.guest_nice = std::stof(cpu_stat_list[10]);

                auto iter = _cpu_stat_map.find(cpu_stat.cpu_name);
                if(iter != _cpu_stat_map.end())
                {
                    CpuStat old = iter->second;

                    float new_cpu_total_time = cpu_stat.user + cpu_stat.system +
                                              cpu_stat.idle + cpu_stat.nice +
                                              cpu_stat.io_wait + cpu_stat.irq +
                                              cpu_stat.soft_irq + cpu_stat.steal;
                    float old_cpu_total_time = old.user + old.system + old.idle + old.nice +
                                               old.io_wait + old.irq + old.soft_irq +
                                               old.steal;

                    float new_cpu_busy_time = cpu_stat.user + cpu_stat.system +
                                              cpu_stat.nice + cpu_stat.irq +
                                              cpu_stat.soft_irq + cpu_stat.steal;
                    float old_cpu_busy_time = old.user + old.system + old.nice + old.irq +
                                              old.soft_irq + old.steal;

                    float cpu_percent = (new_cpu_busy_time - old_cpu_busy_time) /
                                        (new_cpu_total_time - old_cpu_total_time) * 100.00;
                    float cpu_user_percent = (cpu_stat.user - old.user) /
                                             (new_cpu_total_time - old_cpu_total_time) * 100.00;
                    float cpu_system_percent = (cpu_stat.system - old.system) /
                                               (new_cpu_total_time - old_cpu_total_time) * 100.00;
                    float cpu_nice_percent = (cpu_stat.nice - old.nice) /
                                             (new_cpu_total_time - old_cpu_total_time) * 100.00;
                    float cpu_idle_percent = (cpu_stat.idle - old.idle) /
                                             (new_cpu_total_time - old_cpu_total_time) * 100.00;
                    float cpu_io_wait_percent = (cpu_stat.io_wait - old.io_wait) /
                                                (new_cpu_total_time - old_cpu_total_time) * 100.00;
                    float cpu_irq_percent = (cpu_stat.irq - old.irq) /
                                            (new_cpu_total_time - old_cpu_total_time) * 100.00;
                    float cpu_soft_irq_percent = (cpu_stat.soft_irq - old.soft_irq) /
                                                 (new_cpu_total_time - old_cpu_total_time) * 100.00;

                    auto cpu_stat_msg = monitorInfo->add_cpu_stat();
                    cpu_stat_msg->set_cpu_name(cpu_stat.cpu_name);
                    cpu_stat_msg->set_cpu_percent(cpu_percent);
                    cpu_stat_msg->set_usr_percent(cpu_user_percent);
                    cpu_stat_msg->set_sys_percent(cpu_system_percent);
                    cpu_stat_msg->set_nice_percent(cpu_nice_percent);
                    cpu_stat_msg->set_idle_percent(cpu_idle_percent);
                    cpu_stat_msg->set_io_wait_percent(cpu_io_wait_percent);
                    cpu_stat_msg->set_irq_percent(cpu_irq_percent);
                    cpu_stat_msg->set_soft_irq_percent(cpu_soft_irq_percent);
                } // end of if(iter != _cpu_stat_map.end())

                _cpu_stat_map[cpu_stat.cpu_name] = cpu_stat;
            } // end of if(cpu_stat_list[0].find("cpu") != std::string::npos)

            cpu_stat_list.clear();
        } // end of while(cpu_stat_file.ReadLine(&cpu_stat_list))
    }
} // end of namespace monitor