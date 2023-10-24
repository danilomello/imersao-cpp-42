#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "shape.hpp"
using namespace std;

class triangle: public shape {

    private:
        int base;
        int height;
        int side_one;
        int side_two;
        int side_three;

    public:
        triangle() {
            this->base = 1;
            this->height = 1;
            this->side_one = 1;
            this->side_three = 1;
            this->side_two = 1;
        }

        triangle(int base, int height, int side_one, 
                int side_two, int side_three) {
                    
            this->base = base;
            this->height = height;
            this->side_one = side_one;
            this->side_three = side_three;
            this->side_two = side_two;
        }

        virtual void area() {
            cout << "Triangle area is " << ((base * height)/2) << endl;
        }

        virtual void perimeter() {
            cout << "Triangle perimeter is " << 
                (side_one + side_two + side_three) << endl;
        }
};

#endif