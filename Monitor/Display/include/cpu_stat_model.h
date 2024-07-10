#pragma once

#include <vector>
#include "monitor_inter.h"
#include "Monitor_Info.grpc.pb.h"
#include "Monitor_Info.pb.h"

namespace monitor
{
    class CpuStatModel : public MonitorInterModel
    {
        Q_OBJECT
    public:
        explicit CPuStatModel(QObject *parent = nullptr);
        virtual ~CpuStatModel() {}

        int rowCount(const QModelIndex &parent = QModelIndex()) const override;
        int columnCount(const QModelIndex &parent = QModelIndex()) const override;
        QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;
        QVariant headerData(int section, Qt::Orientation orientation, int role) const override;
        void UpdateMonitorInfo(const monitor::MonitorInfo &monito_info);

    signals:
        void dataChanged(const QModelIndex &topLeft, const QModelIndex &bottomRight,
                         const QVector<int> &roles);

    private:
        std::vector<QVariant> InsertOneCpuStat(const monitor::CpuStat &cpu_stat);
        std::vector<std::vector<QVariant>> _monitorData;
        QStringList _header;

        enum CpuStat
        {
            CPU_NAME = 0,
            CPU_PERCENT,
            CPU_USER_PERCENT,
            CPU_SYSTEM_PERCENT,
            COLUMN_MAX
        };
    };
} // end of namespace monitor