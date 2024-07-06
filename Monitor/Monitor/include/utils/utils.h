#pragma once

#include <boost/chrono.hpp>

namespace monitor
{
    class Utils
    {
    public:
        static double SteadyTimeSecond(const boost::chrono::steady_clock::time_point &t1,
                                       const boost::chrono::steady_clock::time_point &t2)
        {
            boost::chrono::duration<double> timeSecond = t1 - t2;
            return timeSecond.count();
        }
    };
} // end of namespace monitor