#include <iostream>
#include "Shovel.hpp"
#include "Hammer.hpp"
#include "Worker.hpp"
#include "Workshop.hpp"


int main() {
    // Worker w1 = Worker();
    // Worker w2 = Worker();
    // Shovel s = Shovel();

    // w1.grabShovel(s);
    // Workshop ws = Workshop();


    
    Worker w = Worker();
    Shovel* s = new Shovel();
    Hammer* h = new Hammer();
    // s->use();
    w.getTool(s);
    w.work();
    w.getTool(h);
    w.work();


    // ws.subscribeWorker(&w);
    // ws.unsubscribeWorker(&w);

}