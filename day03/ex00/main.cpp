#include <iostream>
#include "Car.hpp"

using namespace std;

int main() {
    
    Car car = Car();
    cout << car << endl;
    car.~Car();
}