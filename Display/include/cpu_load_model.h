#pragma once

#include <vector>
#include "monitor_inter.h"
#include "Monitor_Info.grpc.pb.h"
#include "Monitor_Info.pb.h"

namespace monitor
{
    class CpuLoadModel : public MonitorInterModel
    {
        // Q_OBJECT
    public:
        explicit CpuLoadModel(QObject *parent = nullptr);
        virtual ~CpuLoadModel() {}

        int rowCount(const QModelIndex &parent = QModelIndex()) const override;
        int columnCount(const QModelIndex &parent = QModelIndex()) const override;
        QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;
        QVariant headerData(int section, Qt::Orientation orientation, int role) const override;
        void UpdateMonitorInfo(const monitor::MonitorInfo &monitorInfo);
    
    private:
        std::vector<QVariant> InsertOneCpuLoad(const monitor::CpuLoad &cpu_load);
        std::vector<std::vector<QVariant>> _monitorData;
        QStringList _header;

        enum CpuLoad
        {
            CPU_AVG_1 = 0,
            CPU_AVG_3,
            CPU_AVG_15,
            COLUMN_MAX
        };
    };
} // end of namespace monitor