#include <thread>
#include <QApplication>
#include "Client/rpc_client.h"
#include "monitor_widget.h"

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);
    monitor::MonitorWidget monitor_widget;
    monitor::RpcClient rpc_client;
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
