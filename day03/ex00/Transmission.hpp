#ifndef TRANSMISSION_H
#define TRANSMISSION_H

#include <iostream>

using namespace std;

class Transmission {

    private:
        int gear;
    
    public:

        Transmission() {
            this->gear = 0;
        }

        ~Transmission(){};

        void shift_gears_up() {
            this->gear++;
            cout << "Shifting gear to " << this->gear << endl;
        }

        void shift_gears_down() {
            if (this->gear == -1) {
                cout << "Can't shift gear down. Gear in rear" << endl;
            } else {
                this->gear--;
                cout << "Shifting gear to " << this->gear << endl;
            }
        }

        void reverse(bool car_in_movement) {
            try {
                if (car_in_movement) {
                    throw "Can't reverse while in movement";
                }
                this->gear = -1;
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
            }
        }

        int getGear() {
            return this->gear;
        }
};

#endif