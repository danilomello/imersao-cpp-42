#include "Worker.hpp"

Worker::Worker() {
    this->coordonnee.x = 0;
    this->coordonnee.y = 0;
    this->coordonnee.z = 0;
    this->stat.level = 0;
    this->stat.exp = 0;
    this->shovel = NULL;
}

void Worker::grabShovel(Shovel* shovel) {
    
    if (&shovel->getWorker() != this)
    {
        Worker w = shovel.getWorker(); // colocar if
        w.dropShovel();
        this->shovel = &shovel;
        // shovel.setWorker(this);
        cout << "I've got a shovel." << endl;
    } else {
        cout << "I already have a shovel" << endl;
    }
}

void Worker::dropShovel(){
    if(this->shovel == NULL) {
        cout << "This worker don't have a shovel to drop )=" << endl;
    } else {
        this->shovel = NULL;
    }
}