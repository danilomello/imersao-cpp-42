#ifndef FILE_LOGGER_H
#define FILE_LOGGER_H

#include "ILogger.hpp"
#include <fstream>
#include <ctime>

using namespace std;

class FileLogger: public Ilogger {

    public:
        FileLogger(){};
        ~FileLogger(){};

        virtual void write(std::string text) {
            fstream fs;
            fs.open("./log.txt", std::fstream::in | std::fstream::out | std::fstream::app);
            time_t now = time(0);
            char* dt = ctime(&now);
            fs << "[File logger] " << text << endl;
            fs.close();
        }
};

#endif