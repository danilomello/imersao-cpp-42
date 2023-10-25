#include <iostream>
#include "Car.hpp"

using namespace std;

int main() {
    
    Car car = Car();
    cout << car << endl;

    car.accelerate(20);
    car.shift_gears_up();
    cout << car << endl;
    car.~Car();
}