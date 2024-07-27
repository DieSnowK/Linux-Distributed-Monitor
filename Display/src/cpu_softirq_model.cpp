#include "cpu_softirq_model.h"

namespace monitor
{
    SoftIrqModel::SoftIrqModel(QObject* parent)
        : MonitorInterModel(parent)
    {
        _header << tr("cpu");
        _header << tr("hi");
        _header << tr("timer");
        _header << tr("net_tx");
        _header << tr("net_rx");
        _header << tr("block");
        _header << tr("irq_poll");
        _header << tr("tasklet");
        _header << tr("sched");
        _header << tr("hrtimer");
        _header << tr("rcu");
    }

    int SoftIrqModel::rowCount(const QModelIndex &parent) const
    {
        return _monitorData.size();
    }

    int SoftIrqModel::columnCount(const QModelIndex &parent) const
    {
        return COLUMN_MAX;
    }

    QVariant SoftIrqModel::data(const QModelIndex &index, int role = Qt::DisplayRole) const
    {
        if (index.column() < 0 || index.column() >= COLUMN_MAX)
        {
            return QVariant();
        }

        if (role == Qt::DisplayRole)
        {
            if (index.row() < _monitorData.size() && index.column() < COLUMN_MAX)
                return _monitorData[index.row()][index.column()];
        }

        return QVariant();
    }

    QVariant SoftIrqModel::headerData(int section, Qt::Orientation orientation, int role) const
    {
        if (role == Qt::DisplayRole && orientation == Qt::Horizontal)
        {
            return _header[section];
        }

        return MonitorInterModel::headerData(section, orientation, role);
    }

    void UpdateMonitorInfo(const monitor::MonitorInfo &monitorInfo)
    {
        beginResetModel();
        _monitorData.clear();

        for (int i = 0; i < monitorInfo.sort_irq_size(); i++)
        {
            _monitorData.push_back(InsertOneSoftIrq(monitorInfo.soft_irq(i)));
        }

        endResetModel();
    }

    std::vector<QVariant> InsertOneSoftIrq(const monitor::SoftIrq &soft_irq)
    {
        std::vector<QVariant> soft_irq_list;
        for (int i = SoftIrq::CPU_NAME; i < SoftIrq::COLUMN_MAX; i++)
        {
            switch(i)
            {
            case SoftIrq::CPU_NAME:
                soft_irq_list.push_back(QVariant(QString::fromStdString(soft_irq.cpu())));
                break;
            case SoftIrq::HI:
                soft_irq_list.push_back(QVariant(soft_irq.hi()));
                break;
            case SoftIrq::TIMER:
                soft_irq_list.push_back(QVariant(soft_irq.timer()));
                break;
            case SoftIrq::NET_TX:
                soft_irq_list.push_back(QVariant(soft_irq.net_tx()));
                break;
            case SoftIrq::NET_RX:
                soft_irq_list.push_back(QVariant(soft_irq.net_rx()));
                break;
            case SoftIrq::BLOCK:
                soft_irq_list.push_back(QVariant(soft_irq.block()));
                break;
            case SoftIrq::IRQ_POLL:
                soft_irq_list.push_back(QVariant(soft_irq.irq_poll()));
                break;
            case SoftIrq::TASKLET:
                soft_irq_list.push_back(QVariant(soft_irq.tasklet()));
                break;
            case SoftIrq::SCHED:
                soft_irq_list.push_back(QVariant(soft_irq.sched()));
                break;
            case SoftIrq::HRTIMER:
                soft_irq_list.push_back(QVariant(soft_irq.hrtimer()));
                break;
            case SoftIrq::RCU:
                soft_irq_list.push_back(QVariant(soft_irq.rcu()));
                break;
            default:
                break;
            }
        }

        return soft_irq_list;
    }
} // end of namespace monitor