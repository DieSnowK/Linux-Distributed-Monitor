#pragma once

#include <vector>
#include "monitor_inter.h"
#include "Monitor_Info.grpc.pb.h"
#include "Monitor_Info.pb.h"

namespace monitor
{
    class MemModel : public MonitorInterModel
    {
    public:
        explicit MemModel(QObject *parent = nullptr);
        virtual ~MemModel() {}

        int rowCount(const QModelIndex &parent = QModelIndex()) const override;
        int columnCount(const QModelIndex &parent = QModelIndex()) const override;
        QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;
        QVariant headerData(int section, Qt::Orientation orientation, int role) const override;
        void UpdateMonitorInfo(const monitor::MonitorInfo &monitorInfo);

    private:
        std::vector<QVariant> InsertOneMemInfo(const monitor::MemInfo &mem_info);
        std::vector<std::vector<QVariant>> _monitorData;
        QStringList _header;

        enum MemInfo
        {
            USED_PERCENT = 0,
            TOTAL,
            FREE,
            AVAIL,
            BUFFERS,
            CACHED,
            SWAP_CACHED,
            ACTIVE,
            INACTIVE,
            ACTIVE_ANON,
            INACTIVE_ANON,
            DIRTY,
            WRITEBACK,
            ANON_PAGES,
            MAPPED,
            KRECLAIMABLE,
            SRECLAIMABLE,
            SUNRECLAIM,
            COLUMN_MAX
        };
    };
} // end of namespace monitor