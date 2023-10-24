#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>

class shape {

    public:
        virtual void area() = 0;
        virtual void perimeter() = 0;
};

#endif