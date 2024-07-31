#include <thread>
#include <QApplication>
#include "Client/rpc_client.h"
#include "monitor_widget.h"

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

    std::string target(argv[1]);
    target += ":" + std::string(argv[2]);

    QApplication app(argc, argv);
    monitor::MonitorWidget monitor_widget;
    monitor::RpcClient rpc_client(target);
    monitor::MonitorInfo monitor_info;

    rpc_client.GetMonitorInfo(&monitor_info);
    std::string name = monitor_info.name();

    QWidget *widget = monitor_widget.ShowAllMonitorWidget(name);
    widget->show();

    std::unique_ptr<std::thread> thread;
    thread = std::make_unique<std::thread>([&]() 
    {
        while(true)
        {
            monitor_info.Clear();
            rpc_client.GetMonitorInfo(&monitor_info);
            monitor_widget.UpdateData(monitor_info);
            std::this_thread::sleep_for(std::chrono::seconds(2));
        }
    });
    thread->detach();

    return app.exec();
}
