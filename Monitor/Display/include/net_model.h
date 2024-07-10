#pragma once

#include <vector>
#include "monitor_inter.h"
#include "Monitor_Info.grpc.pb.h"
#include "Monitor_Info.pb.h"

namespace monitor
{
    class NetModel : public MonitorInterModel
    {
        Q_OBJECT
    public:
        explicit NetModel(QObject *parent = nullptr);
        virtual ~NetModel() {}

        int rowCount(const QModelIndex &parent = QModelIndex()) const override;
        int columnCount(const QModelIndex &parent = QModelIndex()) const override;
        QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;
        QVariant headerData(int section, Qt::Orientation orientation, int role) const override;
        void UpdateMonitorInfo(const monitor::MonitorInfo &monito_info);

    signals:
        void dataChanged(const QModelIndex &topLeft, const QModelIndex &bottomRight,
                         const QVector<int> &roles);

    private:
        std::vector<QVariant> InsertOneNetInfo(const monitor::NetInfo &net_info);
        std::vector<std::vector<QVariant>> _monitorData;
        QStringList _header;

        enum NetInfo
        {
            NAME = 0,
            SEND_RATE,
            RCV_RATE,
            SEND_PACKETS_RATE,
            RCV_PACKETS_RATE,
            COLUMN_MAX
        };
    };
} // end of namespace monitor