#ifndef CAR_H
#define CAR_H

#include <iostream>
#include "Motor.hpp"
#include "Direction.hpp"
#include "Transmission.hpp"
#include "Brake.hpp"

using namespace std;

class Car
{
private:
    Motor* motor;
    Transmission* transmission;
    Direction* direction;
    Brake* brake;
    int speed;
    bool car_in_movement;

public:
    Car(Motor* motor, Transmission* transmission, Direction* direction,
        Brake* brake) {
        this->motor = motor;
        this->transmission = transmission;
        this->car_in_movement = false;
        this->direction = direction;
        this->brake = brake;
        this->speed = 0;
    };

    ~Car(){};

    void start() {
        motor->start();
    }

    void stop() {
        motor->stop();
    }

    void accelerate(int speed) {
        transmission->shift_gears_up();  
        motor->accelerate(speed);
        this->speed = 50;
    }

    void lower_speed() {
        brake->apply_force_on_brakes(50);
        transmission->shift_gears_down();
        this->speed = 20;
    }

    void reverse() {
        transmission->reverse(car_in_movement);
    }

    void turn_wheel(int angle) {
        direction->turn_wheel(angle);
    }

    void straighten_wheels() {
        direction->straighten_wheels();
    }

    void apply_emergency_brakes() {
        brake->apply_emergency_brakes();
        this->speed = 0;
        this->car_in_movement = false;
    }

    friend std::ostream& operator<<(std::ostream& p_os, Car p_car)
    {
        p_os << "--- car stats ---" << endl;
        p_os << "Speed: " << p_car.speed << endl;
        p_os << "Gear: " << p_car.transmission->getGear() << endl;
        p_os << "Wheel angle: " << p_car.direction->getWheelangle() << endl;
        p_os << "Breake force: " << p_car.brake->getBrakeforce() << endl;
        p_os << "Car in movement? " << p_car.car_in_movement << endl;
        p_os << endl;
        return p_os;
    }
};

#endif