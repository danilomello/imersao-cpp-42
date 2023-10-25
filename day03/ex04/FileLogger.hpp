#ifndef FILE_LOGGER_H
#define FILE_LOGGER_H

#include "ILogger.hpp"
#include <fstream>

using namespace std;

class FileLogger: public Ilogger {

    public:
        FileLogger(){};
        ~FileLogger(){};

        virtual void write(std::string text) {
            fstream fs;
            fs.open("./log.txt", std::fstream::in | std::fstream::out | std::fstream::app);
            fs << text << endl;
            fs.close();
        }
};

#endif