#ifndef CAR_H
#define CAR_H

#include <iostream>
using namespace std;

class Car
{
private:
    int speed;
    int gear;
    bool car_in_movement;
    int wheel_angle;
    int break_force;

public:
    Car() {
        this->gear = 0;
        this->speed = 0;
        this->car_in_movement = false;
        this->wheel_angle = 90;
        this->break_force = 0;
    };
    ~Car(){};

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

    void reverse() {
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

    void apply_force_on_brakes(int force) {
        if (force > 100) {
            cout << "The force must be lesser than 100" << endl;
        } else {
            this->break_force = force;
        }
    }

    void apply_emergency_brakes() {
        this->break_force = 100;
        this->speed = 0;
        this->car_in_movement = false;
    }

    friend std::ostream& operator<<(std::ostream& p_os, Car p_car)
    {
        p_os << "--- car stats ---" << endl;
        p_os << "Speed: " << p_car.speed << endl;
        p_os << "Gear: " << p_car.gear << endl;
        p_os << "Wheel angle: " << p_car.wheel_angle << endl;
        p_os << "Breake force: " << p_car.break_force << endl;
        p_os << "Car in movement? " << p_car.car_in_movement << endl;
        p_os << endl;
        return p_os;
    }
};

#endif