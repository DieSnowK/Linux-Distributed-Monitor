#include "mem_model.h"

namespace monitor
{
    MemModel::MemModel(QObject* parent)
        : MonitorInterModel(parent)
    {
        _header << tr("used_percent");
        _header << tr("total");
        _header << tr("free");
        _header << tr("avail");
        _header << tr("buffers");
        _header << tr("cached");
        _header << tr("swap_cached");
        _header << tr("active");
        _header << tr("in_active");
        _header << tr("active_anon");
        _header << tr("inactive_anon");
        _header << tr("active_file");
        _header << tr("inactive_file");
        _header << tr("dirty");
        _header << tr("writeback");
        _header << tr("anon_pages");
        _header << tr("mapped");
        _header << tr("kReclaimable");
        _header << tr("sReclaimable");
        _header << tr("sUnreclaim");
    }

    int MemModel::rowCount(const QModelIndex &parent) const
    {
        return _monitorData.size();
    }

    int MemModel::columnCount(const QModelIndex &parent) const
    {
        return COLUMN_MAX;
    }

    QVariant MemModel::data(const QModelIndex &index, int role) const
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

    QVariant MemModel::headerData(int section, Qt::Orientation orientation, int role) const
    {
        if (role == Qt::DisplayRole && orientation == Qt::Horizontal)
        {
            return _header[section];
        }

        return MonitorInterModel::headerData(section, orientation, role);
    }

    void MemModel::UpdateMonitorInfo(const monitor::MonitorInfo &monitorInfo)
    {
        beginResetModel();
        _monitorData.clear();

        _monitorData.push_back(InsertOneMemInfo(monitorInfo.mem_info()));

        endResetModel();
    }

    std::vector<QVariant> MemModel::InsertOneMemInfo(const monitor::MemInfo &mem_info)
    {
        std::vector<QVariant> mem_info_list;
        for (int i = MemInfo::USED_PERCENT; i < MemInfo::COLUMN_MAX; i++)
        {
            switch (i)
            {
            case MemInfo::USED_PERCENT:
                mem_info_list.push_back(QVariant(mem_info.used_percent()));
                break;
            case MemInfo::TOTAL:
                mem_info_list.push_back(QVariant(mem_info.total()));
                break;
            case MemInfo::FREE:
                mem_info_list.push_back(QVariant(mem_info.free()));
                break;
            case MemInfo::AVAIL:
                mem_info_list.push_back(QVariant(mem_info.avail()));
                break;
            case MemInfo::BUFFERS:
                mem_info_list.push_back(QVariant(mem_info.buffers()));
                break;
            case MemInfo::CACHED:
                mem_info_list.push_back(QVariant(mem_info.cached()));
                break;
            case MemInfo::SWAP_CACHED:
                mem_info_list.push_back(QVariant(mem_info.swap_cached()));
                break;
            case MemInfo::ACTIVE:
                mem_info_list.push_back(QVariant(mem_info.active()));
                break;
            case MemInfo::INACTIVE:
                mem_info_list.push_back(QVariant(mem_info.inactive()));
                break;
            case MemInfo::ACTIVE_ANON:
                mem_info_list.push_back(QVariant(mem_info.active_anon()));
                break;
            case MemInfo::INACTIVE_ANON:
                mem_info_list.push_back(QVariant(mem_info.inactive_anon()));
                break;
            case MemInfo::DIRTY:
                mem_info_list.push_back(QVariant(mem_info.dirty()));
                break;
            case MemInfo::WRITEBACK:
                mem_info_list.push_back(QVariant(mem_info.writeback()));
                break;
            case MemInfo::ANON_PAGES:
                mem_info_list.push_back(QVariant(mem_info.anon_pages()));
                break;
            case MemInfo::MAPPED:
                mem_info_list.push_back(QVariant(mem_info.mapped()));
                break;
            case MemInfo::KRECLAIMABLE:
                mem_info_list.push_back(QVariant(mem_info.k_reclaimable()));
                break;
            case MemInfo::SRECLAIMABLE:
                mem_info_list.push_back(QVariant(mem_info.s_reclaimable()));
                break;
            case MemInfo::SUNRECLAIM:
                mem_info_list.push_back(QVariant(mem_info.s_unreclaim()));
                break;
            default:
                break;
            }
        }

        return mem_info_list;
    }
} // end of namespace monitor