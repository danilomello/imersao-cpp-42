#include <iostream>
#include "Motor.hpp"
#include "Direction.hpp"
#include "Brake.hpp"
#include "Transmission.hpp"
#include "Car.hpp"

using namespace std;

int main() {
    
    Motor* motor = new Motor;
    Transmission* transmission = new Transmission;
    Direction* direction = new Direction;
    Brake* brake = new Brake;

    Car car = Car(
        motor,
        transmission,
        direction,
        brake
    );
    
    cout << car << endl;

    car.accelerate(20);
    car.shift_gears_up();
    cout << car << endl;
    car.~Car();
}