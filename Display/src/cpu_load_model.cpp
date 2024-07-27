#include "cpu_load_model.h"

namespace monitor
{
    CpuLoadModel::CpuLoadModel(QObject* parent = nullptr)
        : MonitorInterModel(parent)
    {
        _header << tr("load_1"); // Can be translated
        _header << tr("load_3");
        _header << tr("load_15");
    }

    int CpuLoadModel::rowCount(const QModelIndex& parent) const
    {
        return _monitorData.size();
    }

    int CpuLoadModel::columnCount(const QModelIndex &parent) const
    {
        return COLUMN_MAX;
    }

    QVariant CpuLoadModel::data(const QModelIndex &index, int role = Qt::DisplayRole) const
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

    QVariant CpuLoadModel::headerData(int section, Qt::Orientation orientation, int role) const
    {
        if (role == Qt::DisplayRole && orientation == Qt::Horizontal)
        {
            return _header[section];
        }

        return MonitorInterModel::headerData(section, orientation, role);
    }

    void CpuLoadModel::UpdateMonitorInfo(const monitor::MonitorInfo &monitorInfo)
    {
        beginResetModel();
        _monitorData.clear();

        _monitorData.push_back(InsertOneCpuLoad(monitorInfo.CpuLoad()));

        endResetModel();
    }

    std::vector<QVariant> CpuLoadModel::InsertOneCpuLoad(const monitor::CpuLoad &cpu_load)
    {
        std::vector<QVariant> cpu_load_list;
        for (int i = CPULoad::CPU_AVG_1; i < CPULoad::COLUMN_MAX; i++)
        {
            switch(i)
            {
            case CpuLoad::CPU_AVG_1:
                cpu_load_list.push_back(QVariant(cpu_load.load_avg_1_()));
                break;
            case CpuLoad::CPU_AVG_3:
                cpu_load_list.push_back(QVariant(cpu_load.load_avg_3_()));
                break;
            case CpuLoad::CPU_AVG_15:
                cpu_load_list.push_back(QVariant(cpu_load.load_avg_15_()));
                break;
            default:
                break;
            }
        }

        return cpu_load_list;
    }
} // end of namespace monitor