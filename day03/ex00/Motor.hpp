#ifndef MOTOR_H
#define MOTOR_H

#include <iostream>
using namespace std;

class Motor {

    private:
        int speed;
        bool car_in_movement;

    public:
        Motor(){
            this->speed = 0;
            this->car_in_movement = false;
        };
        
        ~Motor();
        
        void start() {
            cout << "Starting engine" << endl;
        }

        void stop() {
            cout << "Stoping engine" << endl;
        }

        void accelerate(int speed) {     
            try {
                if (speed <= 0) {
                    throw "acceleration must be greater than 0";
                }
                this->speed+=speed;
                this->car_in_movement = true;
            } catch(const std::exception& e) {
                std::cerr << e.what() << '\n';
            }
        }
};

#endif