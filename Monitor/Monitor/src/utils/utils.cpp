#include "utils/utils.h"

namespace monitor
{
    bool Utils::ReadFile::ReadLine(std::vector<std::string> *args)
    {
        std::string line;
        
        std::getline(_ifs, line);
        if(_ifs.eof() || line.empty())
        {
            return false;
        }

        std::istringstream line_ss(line);
        while(!line_ss.eof())
        {
            std::string word;
            line_ss >> word;
            args->push_back(word);
        }

        return true;
    }

    std::vector<std::string> Utils::ReadFile::GetStatsLines(const std::string &statFile,
                                                                   const int lineCount)
    {
        std::vector<std::string> stats_lines;
        std::ifstream buffer(statFile);

        for (int i = 0; i < lineCount; ++i)
        {
            std::string line;

            std::getline(buffer, line);
            if(line.empty())
            {
                break;
            }

            stats_lines.push_back(line);
        }

        return stats_lines;
    }
}