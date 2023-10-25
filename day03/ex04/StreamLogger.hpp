#ifndef STREAM_LOGGER_H
#define STREAM_LOGGER_H

#include "ILogger.hpp"

using namespace std;

class StreamLogger: public Ilogger {

    private:
        std::ostream& stream;

    public:
        StreamLogger(std::ostream& outputStream) : stream(outputStream) {}
        ~StreamLogger(){};

        virtual void write(std::string text) {
            stream << text << endl;            
        }
};


#endif