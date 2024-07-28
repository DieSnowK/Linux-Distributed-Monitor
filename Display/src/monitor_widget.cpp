#include "monitor_widget.h"


namespace monitor
{
    MonitorWidget::MonitorWidget(QWidget *parent) {}

    QWidget* MonitorWidget::ShowAllMonitorWidget(const std::string &name)
    {
        QWidget* widget = new QWidget();

        _stack_menu = new QStackedLayout();
        _stack_menu->addWidget(InitCpuMonitorWidget());
        _stack_menu->addWidget(InitSoftIrqMonitorWidget());
        _stack_menu->addWidget(InitMemMonitorWidget());
        _stack_menu->addWidget(InitNetMonitorWidget());

        QGridLayout* layout = new QGridLayout(this);
        layout->addWidget(InitButtonMenu(name), 1, 0);
        layout->addLayout(_stack_menu, 2, 0);
        widget->setLayout(layout);

        return widget;
    }

    QWidget* MonitorWidget::InitCpuMonitorWidget()
    {
        QWidget* widget = new QWidget();

        QLabel* cpu_load_label = new QLabel(this);
        cpu_load_label->setText(tr("Monitor CpuLoad:"));
        cpu_load_label->setFont(QFont("Microsoft YaHei", 10, 40));

        _cpu_load_monitor_view = new QTableView;
        _cpu_load_model = new CpuLoadModel;
        _cpu_load_monitor_view->setModel(_cpu_load_model);
        _cpu_load_monitor_view->show();

        QLabel* cpu_stat_label = new QLabel(this);
        cpu_stat_label->setText(tr("Monitor CpuStat:"));
        cpu_stat_label->setFont(QFont("Microsoft YaHei", 10, 40));

        _cpu_stat_monitor_view = new QTableView;
        _cpu_stat_model = new CpuStatModel;
        _cpu_stat_monitor_view->setModel(_cpu_stat_model);
        _cpu_stat_monitor_view->show();

        QGridLayout* layout = new QGridLayout();
        layout->addWidget(cpu_load_label, 3, 0);
        layout->addWidget(_cpu_load_monitor_view, 4, 0, 2, 2);

        layout->addWidget(cpu_stat_label, 1, 0, 1, 1);
        layout->addWidget(_cpu_stat_monitor_view, 2, 0, 1, 2);

        widget->setLayout(layout);

        return widget;
    }

    QWidget* MonitorWidget::InitSoftIrqMonitorWidget()
    {
        QWidget* widget = new QWidget();

        QLabel* monitor_label = new QLabel(this);
        monitor_label->setText(tr("Monitor SoftIrq:"));
        monitor_label->setFont(QFont("Microsoft YaHei", 10, 40));

        _softirq_view = new QTableView;
        _softirq_model = new SoftIrqModel;
        QSortFilterProxyModel* sort_proxy = new QSortFilterProxyModel(this);
        sort_proxy->setSourceModel(_softirq_model);
        _softirq_view->setModel(sort_proxy);
        _softirq_view->setSortingEnabled(true);
        _softirq_view->show();

        QGridLayout* layout = new QGridLayout();
        layout->addWidget(monitor_label, 1, 0);
        layout->addWidget(_softirq_view, 2, 0, 1, 2);

        widget->setLayout(layout);
        
        return widget;
    }

    QWidget* MonitorWidget::InitMemMonitorWidget()
    {
        QWidget* widget = new QWidget();

        QLabel* mem_label = new QLabel(this);
        mem_label->setText(tr("Monitor Mem:"));
        mem_label->setFont(QFont("Microsoft YaHei", 10, 40));

        _mem_monitor_view = new QTableView;
        _mem_model = new MemModel;
        _mem_monitor_view->setModel(_mem_model);
        _mem_monitor_view->show();

        QGridLayout* layout = new QGridLayout();
        layout->addWidget(mem_label, 1, 0);
        layout->addWidget(_mem_monitor_view, 2, 0, 1, 1);

        widget->setLayout(layout);

        return widget;
    }

    QWidget* MonitorWidget::InitNetMonitorWidget()
    {
        QWidget *widget = new QWidget();

        QLabel *net_label = new QLabel(this);
        net_label->setText(tr("Monitor Net:"));
        net_label->setFont(QFont("Microsoft YaHei", 10, 40));

        _net_monitor_view = new QTableView;
        _net_model = new NetModel;
        _net_monitor_view->setModel(_net_model);
        _net_monitor_view->show();

        QGridLayout* layout = new QGridLayout();
        layout->addWidget(net_label, 1, 0);
        layout->addWidget(_net_monitor_view, 2, 0, 1, 1);

        widget->setLayout(layout);

        return widget;
    }

    QWidget *MonitorWidget::InitButtonMenu(const std::string &name)
    {
        QPushButton *cpu_button = new QPushButton(QString::fromStdString(name) + "_CPU", this);
        QPushButton *soft_irq_button = new QPushButton(QString::fromStdString(name) + "_SoftIrq", this);
        QPushButton *mem_button = new QPushButton(QString::fromStdString(name) + "_Mem", this);
        QPushButton *net_button = new QPushButton(QString::fromStdString(name) + "_Net", this);
        QFont *font = new QFont("Microsoft YaHei", 15, 40);
        cpu_button->setFont(*font);
        soft_irq_button->setFont(*font);
        mem_button->setFont(*font);
        net_button->setFont(*font);

        QHBoxLayout *layout = new QHBoxLayout();
        layout->addWidget(cpu_button);
        layout->addWidget(soft_irq_button);
        layout->addWidget(mem_button);
        layout->addWidget(net_button);

        QWidget *widget = new QWidget();
        widget->setLayout(layout);

        connect(cpu_button, &QPushButton::clicked, this, &MonitorWidget::ClickCpuButton);
        connect(soft_irq_button, &QPushButton::clicked, this, &MonitorWidget::ClickSoftIrqButton);
        connect(mem_button, &QPushButton::clicked, this, &MonitorWidget::ClickMemButton);
        connect(net_button, &QPushButton::clicked, this, &MonitorWidget::ClickNetButton);

        return widget;
    }

    void MonitorWidget::UpdateData(const monitor::MonitorInfo &monitorInfo)
    {
        _softirq_model->UpdateMonitorInfo(monitorInfo);
        _cpu_load_model->UpdateMonitorInfo(monitorInfo);
        _cpu_stat_model->UpdateMonitorInfo(monitorInfo);
        _mem_model->UpdateMonitorInfo(monitorInfo);
        _net_model->UpdateMonitorInfo(monitorInfo);
    }

    void MonitorWidget::ClickCpuButton() 
    {
        _stack_menu->setCurrentIndex(0);
    }

    void MonitorWidget::ClickSoftIrqButton() 
    {
        _stack_menu->setCurrentIndex(1);
    }

    void MonitorWidget::ClickMemButton() 
    {
        _stack_menu->setCurrentIndex(2);
    }

    void MonitorWidget::ClickNetButton() 
    {
        _stack_menu->setCurrentIndex(3);
    }
} // end of namespace monitor