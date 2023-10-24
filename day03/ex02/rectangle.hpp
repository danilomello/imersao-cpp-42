#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.hpp"
using namespace std;

class rectangle: public shape {

    private:
        int base;
        int height;
    public:
        rectangle(){
            this->base = 0;
            this->height = 0;
        };

        rectangle(int base, int height){
            this->base = base;
            this->height = height;
        };

        ~rectangle(){};

        virtual void area() {
            cout << "Rectangle area is " << (base * height) << endl;
        }

        virtual void perimeter() {
            cout << "Rectangle perimeter is " << ((base*2) + (height*2)) << endl;
        }
};

#endif