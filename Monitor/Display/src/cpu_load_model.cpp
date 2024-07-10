#include "cpu_load_model.h"

namespace monitor
{
    CpuLoadModel::CpuLoadModel(QObject* parent = nullptr)
        : MonitorInterModel(parent)
    {
        _header << tr("load_1");
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

    QVariant CpuLoadModel::data(const QModelIndex &index, int role) const
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

    // TODO Ã»Ð´Íê
} // end of namespace monitor