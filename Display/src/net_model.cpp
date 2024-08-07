#include "net_model.h"

namespace monitor
{
    NetModel::NetModel(QObject *parent) 
        : MonitorInterModel(parent)
    {
        _header << tr("Name");
        _header << tr("Send_Rate");
        _header << tr("Rcv_Rate");
        _header << tr("Send_Packets_Rate");
        _header << tr("Rcv_Packets_Rate");
    }

    int NetModel::rowCount(const QModelIndex &parent) const
    {
        return _monitorData.size();
    }

    int NetModel::columnCount(const QModelIndex &parent) const
    {
        return COLUMN_MAX;
    }

    QVariant NetModel::data(const QModelIndex &index, int role) const
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

    QVariant NetModel::headerData(int section, Qt::Orientation orientation, int role) const
    {
        if (role == Qt::DisplayRole && orientation == Qt::Horizontal)
        {
            return _header[section];
        }

        return MonitorInterModel::headerData(section, orientation, role);
    }

    void NetModel::UpdateMonitorInfo(const monitor::MonitorInfo &monitorInfo)
    {
        beginResetModel();
        _monitorData.clear();

        for (int i = 0; i < monitorInfo.net_info_size(); i++)
        {
            _monitorData.push_back(InsertOneNetInfo(monitorInfo.net_info(i)));
        }

        endResetModel();
    }

    std::vector<QVariant> NetModel::InsertOneNetInfo(const monitor::NetInfo &net_info)
    {
        std::vector<QVariant> net_info_list;
        for (int i = NetInfo::NAME; i < COLUMN_MAX; i++)
        {
            switch (i)
            {
            case NetInfo::NAME:
                net_info_list.push_back(QVariant(QString::fromStdString(net_info.name())));
                break;
            case NetInfo::SEND_RATE:
                net_info_list.push_back(QVariant(net_info.send_rate()));
                break;
            case NetInfo::RCV_RATE:
                net_info_list.push_back(QVariant(net_info.rcv_rate()));
                break;
            case NetInfo::SEND_PACKETS_RATE:
                net_info_list.push_back(QVariant(net_info.send_packets_rate()));
                break;
            case NetInfo::RCV_PACKETS_RATE:
                net_info_list.push_back(QVariant(net_info.rcv_packets_rate()));
                break;
            default:
                break;
            }
        }
        
        return net_info_list;
    }

} // end of namespace monitor