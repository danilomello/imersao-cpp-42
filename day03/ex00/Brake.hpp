#ifndef BRAKE_H
#define BRAKE_H

#include <iostream>

using namespace std;

class Brake {

    private:
        int brake_force;

    public:

        Brake() {
            this->brake_force = 0;
        }

        ~Brake(){};
    
        void apply_force_on_brakes(int force) {
            if (force > 100) {
                cout << "The force must be lesser than 100" << endl;
            } else {
                this->brake_force = force;
            }
        }

        void apply_emergency_brakes() {
            this->brake_force = 100;
        }

        int getBrakeforce() {
            return this->brake_force;
        }

};

#endif