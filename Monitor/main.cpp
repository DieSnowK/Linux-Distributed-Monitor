#include <memory>
#include <thread>
#include <vector>

#include "Client/rpc_client.h"
#include "Server/rpc_manager.h"

#include "monitor/cpu_load_monitor.h"
#include "monitor/cpu_softirq_monitor.h"
#include "monitor/cpu_stat_monitor.h"
#include "monitor/mem_monitor.h"
#include "monitor/net_monitor.h"

int main()
{
    std::unique_ptr<std::thread> server = nullptr;
    server = std::make_unique<std::thread>(monitor::InitServer);
    server->detach();

    std::vector<std::shared_ptr<monitor::MonitorInter>> runners;
    runners.emplace_back(new monitor::CpuSoftIrqMonitor());
    runners.emplace_back(new monitor::CpuLoadMonitor());
    runners.emplace_back(new monitor::CpuStatMonitor());
    runners.emplace_back(new monitor::MemMonitor());
    runners.emplace_back(new monitor::NetMonitor());

    monitor::RpcClient rpc_client;
    char *usrName = getenv("USER");

    std::unique_ptr<std::thread> thread = nullptr;
    thread = std::make_unique<std::thread>([&]()
    {
        while(true)
        {
            monitor::MonitorInfo monitorInfo;

            monitorInfo.set_name(usrName);
            for(auto& runner : runners) // Factory Pattern
            {
                runner->UpdateOnce(&monitorInfo);
            }

            rpc_client.SetMonitorInfo(monitorInfo);
            std::this_thread::sleep_for(std::chrono::seconds(3));
        }
    });

    thread->join();

    return 0;
}