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

void Usage()
{
    std::cout << "Usage:" << std::endl
              << "\t./monitor SERVER_IP PORT" << std::endl
              << "Attention:" << std::endl
              << "\tPORT must between 1000 and 65535" << std::endl;
}

int main(int argc, char* argv[])
{
    if (argc != 3)
    {
        Usage();
        exit(1);
    }

    int port = std::atoi(argv[2]);
    if (port < 1000 || port > 65535)
    {
        Usage();
        exit(2);
    }

    std::unique_ptr<std::thread> server = nullptr;
    server = std::make_unique<std::thread>(monitor::InitServer, port);
    server->detach();

    std::vector<std::shared_ptr<monitor::MonitorInter>> runners;
    runners.emplace_back(new monitor::CpuSoftIrqMonitor());
    runners.emplace_back(new monitor::CpuLoadMonitor());
    runners.emplace_back(new monitor::CpuStatMonitor());
    runners.emplace_back(new monitor::MemMonitor());
    runners.emplace_back(new monitor::NetMonitor());

    std::string target(argv[1]);
    target += ":" + std::string(argv[2]);

    monitor::RpcClient rpc_client(target);
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