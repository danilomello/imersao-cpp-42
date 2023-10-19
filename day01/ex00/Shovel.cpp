#include <iostream>
#include "Worker.hpp"
#include "Shovel.hpp"

Shovel::Shovel(): worker(worker) {
    numberOfUses = 0;
}

void Shovel::use() {
    cout << "Cavando feliz." << endl;
    this->numberOfUses++;
}

void Shovel::setWorker(Worker* worker) {
    this->setWorker(worker);
};

Worker& Shovel::getWorker() {
    return this->worker;
}