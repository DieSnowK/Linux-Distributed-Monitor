#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
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

        class ReadFile
        {
            explicit ReadFile(const std::string &name)
                : _ifs(name)
            {}

            ~ReadFile()
            {
                _ifs.close();
            }

            bool ReadLine(std::vector<std::string> *args);
            static std::vector<std::string> GetStatsLines(const std::string &statFile,
                                                          const int lineCount);

        private:
            std::fstream _ifs;
        };
    };
} // end of namespace monitor