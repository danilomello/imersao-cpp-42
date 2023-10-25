#ifndef DIRECTION_H
#define DIRECTION_H

#include <iostream>
using namespace std;

class Direction {

    private:
        int wheel_angle;

    public:

        Direction(){
            this->wheel_angle = 90;
        }

        ~Direction(){};

        void turn_wheel(int angle) {

            try {
                if (angle > 45 || angle < -45) {
                    throw "the angle must be between 45 and -45 degrees";
                }
                this->wheel_angle+=angle;
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
            }
        }

        void straighten_wheels() {
            this->wheel_angle = 90;
        }

        int getWheelangle() {
            return this->wheel_angle;
        }
};


#endif