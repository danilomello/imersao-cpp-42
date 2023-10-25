#ifndef ILOGGER_H
#define ILOGGER_H

#include <cstring>
#include <iostream>

class Ilogger {


    public:
        virtual void write(std::string text) = 0;
};

#endif