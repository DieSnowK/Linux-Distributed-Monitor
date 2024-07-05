#pragma once

#include <string>
#include "Monitor_Info.grpc.pb.h"

namespace monitor
{
    class MonitorInter
    {
    public:
        MonitorInter() {}
        virtual ~MonitorInter() {}
        virtual void UpdateOnce(monitor::MonitorInfo monitorInfo) = 0;
        virtual void Stop() = 0;
    };
} // end of namespace monitor