#ifndef ILOGGER_H
#define ILOGGER_H

#include <cstring>
#include <iostream>

class Ilogger {


    public:
        virtual void write(std::string) = 0;
};

#endif