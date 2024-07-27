#pragma once

#include <string>
#include <thread>
#include <QtWidgets>
#include <QStandardItemModel>
#include "cpu_load_model.h"
#include "cpu_softirq_model.h"
#include "cpu_stat_model.h"
#include "mem_model.h"
#include "net_model.h"

namespace monitor
{
    class MonitorWidget : public QWidget
    {
        Q_OBJECT
    public:
        explicit MonitorWidget(QWidget *parent = nullptr);
        ~MonitorWidget() {}

        QWidget* ShowAllMonitorWidget(const std::string &name);
        QWidget* InitCpuMonitorWidget();
        QWidget* InitSoftIrqMonitorWidget();
        QWidget* InitMemMonitorWidget();
        QWidget* InitNetMonitorWidget();
        QWidget* InitButtonMenu(const std::string &name);

        void UpdateData(const monitor::MonitorInfo &monitorInfo);

    private slots:
        void ClickCpuButton();
        void ClickSoftIrqButton();
        void ClickMemButton();
        void ClickNetButton();

    private:
        QTableView *_monitor_view = nullptr;
        QTableView *_cpu_load_monitor_view = nullptr;
        QTableView *_cpu_stat_monitor_view = nullptr;
        QTableView *_mem_monitor_view = nullptr;
        QTableView *_net_monitor_view = nullptr;

        SoftIrqModel *_softirq_monitor_model = nullptr;
        CpuLoadModel *_cpu_load_model = nullptr;
        CpuStatModel *_cpu_stat_model = nullptr;
        MemModel *_mem_model = nullptr;
        NetModel *_net_model = nullptr;

        QStackedLayout *_stack_menu = nullptr;
    };
} // end of monitor