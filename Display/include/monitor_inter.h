#pragma once

#include <QAbstractTableModel> // Provides an interface for accessing data in a table
#include <QObject>

namespace monitor
{
    class MonitorInterModel : public QAbstractTableModel
    {
        // Q_OBJECT
    public:
        explicit MonitorInterModel(QObject *parent = nullptr)
            :QAbstractTableModel(parent) 
        {}
        virtual ~MonitorInterModel() {}

        // Returns the data at the specified index
        QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;

        // Returns the data for the performance headers
        QVariant headerData(int section, Qt::Orientation orientation, int role) const override;
    };
} // end of namespace monitor