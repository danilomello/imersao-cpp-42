#include <iostream>
#include "Shovel.hpp"
#include "Worker.hpp"


int main() {
    // Worker w1 = Worker();
    // Worker w2 = Worker();
    // Shovel s = Shovel();

    // w1.grabShovel(s);

    Worker *worker = new Worker();
    Shovel *shovel = new Shovel();

    worker->grabShovel(shovel);
    worker->dropShovel();
    delete worker;

    if (shovel->numberOfUses > 0)
        std::cout << "Shovel still has uses" << std::endl;
    else
        std::cout << "Shovel has no uses" << std::endl;
    
    delete shovel;
    if (shovel->numberOfUses > 0)
        std::cout << "Shovel still has uses" << std::endl;
    else
        std::cout << "Shovel has no uses" << std::endl;
    return (0);

}