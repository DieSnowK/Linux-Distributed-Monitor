#include "cpu_stat_model.h"

namespace monitor
{
    CpuStatModel::CpuStatModel(QObject* parent)
        : MonitorInterModel(parent)
    {
        _header << tr("Name");
        _header << tr("Cpu_Percent");
        _header << tr("User");
        _header << tr("System");
    }

    int CpuStatModel::rowCount(const QModelIndex &parent) const
    {
        return _monitorData.size();
    }

    int CpuStatModel::columnCount(const QModelIndex &parent) const
    {
        return COLUMN_MAX;
    }

    QVariant CpuStatModel::data(const QModelIndex &index, int role) const
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

    QVariant CpuStatModel::headerData(int section, Qt::Orientation orientation, int role) const
    {
        if (role == Qt::DisplayRole && orientation == Qt::Horizontal)
        {
            return _header[section];
        }

        return MonitorInterModel::headerData(section, orientation, role);
    }

    void CpuStatModel::UpdateMonitorInfo(const monitor::MonitorInfo &monitorInfo)
    {
        beginResetModel();
        _monitorData.clear();

        for (int i = 0; i < monitorInfo.cpu_stat_size(); i++)
        {
            _monitorData.push_back(InsertOneCpuStat(monitorInfo.cpu_stat(i)));
        }

        endResetModel();
    }

    std::vector<QVariant> CpuStatModel::InsertOneCpuStat(const monitor::CpuStat &cpu_stat)
    {
        std::vector<QVariant> cpu_stat_list;
        for (int i = CpuStat::CPU_NAME; i < CpuStat::COLUMN_MAX; i++)
        {
            switch (i)
            {
            case CpuStat::CPU_NAME:
                cpu_stat_list.push_back(QVariant(QString::fromStdString(cpu_stat.cpu_name())));
                break;
            case CpuStat::CPU_PERCENT:
                cpu_stat_list.push_back(QVariant(cpu_stat.cpu_percent()));
                break;
            case CpuStat::CPU_USER_PERCENT:
                cpu_stat_list.push_back(QVariant(cpu_stat.usr_percent()));
                break;
            case CpuStat::CPU_SYSTEM_PERCENT:
                cpu_stat_list.push_back(QVariant(cpu_stat.sys_percent()));
                break;
            default:
                break;
            }
        }
        
        return cpu_stat_list;
    }
} // end of namespace monitor