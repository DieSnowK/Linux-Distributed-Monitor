#pragma once

#include <string>
#include <thread>
#include <QtWidgets>
#include <QStandardItemModel>
#include "cpu_load_model.h"
#include "cpu_softirq_model.h"
#include "cpu_stat_model.h"
#include "mem_model.h"
#include "net_model.h"

namespace monitor
{
    class MonitorWidget : public QWidget
    {
        Q_OBJECT
    public:
        
    };
} // end of monitor