#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.hpp"
using namespace std;

const float PI = 3.14159265359;
class circle: public shape {

    private:
        int radius;

    public:
        circle() {
            this->radius = 2;
        }

        circle(int radius) {
            this->radius = radius;
        }

        virtual void area() {
            cout << "Circle area is " << (this->radius * PI) << endl;
        }

        virtual void perimeter() {
            cout << "Circle perimeter is " << (2 * PI * this->radius) << endl;
        }
};

#endif