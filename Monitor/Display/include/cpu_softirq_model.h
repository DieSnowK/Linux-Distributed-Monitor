#pragma once

#include <vector>
#include "monitor_inter.h"
#include "Monitor_Info.grpc.pb.h"
#include "Monitor_Info.pb.h"

namespace monitor
{
    class MonitorBaseModel : public MonitorInterModel
    {
        Q_OBJECT

    public:
        explicit MonitorBaseModel(QObject *parent = nullptr);
        virtual ~MonitorBaseModel() {}

        int rowCount(const QModelIndex &parent = QModelIndex()) const override;
        int columnCount(const QModelIndex &parent = QModelIndex()) const override;
        QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;
        QVariant headerData(int section, Qt::Orientation orientation, int role) const override;
        void UpdateMonitorInfo(const monitor::proto::MonitorInfo &monito_info);

    signals:
        void dataChanged(const QModelIndex &topLeft, const QModelIndex &bottomRight,
                         const QVector<int> &roles);
    
    private:
        std::vector<QVariant> InsertOneSoftIrq(const monitor::SoftIrq &soft_irq);
        std::vector<std::vector<QVariant>> _monitorData;
        QStringList _header;

        enum SoftIrqInfo
        {
            CPU_NAME = 0,
            HI,
            TIMER,
            NET_TX,
            NET_RX,
            BLOCK,
            IRQ_POLL,
            TASKLET,
            SCHED,
            HRTIMER,
            RCU,
            COLUMN_MAX
        };
    };
} // end of monitor