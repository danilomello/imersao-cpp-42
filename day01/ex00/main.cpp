#include <iostream>
#include "Shovel.hpp"
#include "Hammer.hpp"
#include "Worker.hpp"
#include "Workshop.hpp"


int main() {

    Workshop ws = Workshop();
    Shovel* s = new Shovel();
    Hammer* h = new Hammer();

    Worker w1 = Worker();
    w1.getTool(s);
    Worker w2 = Worker();
    w2.getTool(h);

    ws.subscribeWorker(&w1);
    ws.subscribeWorker(&w2);
    ws.executeWorkDay();
    ws.unsubscribeWorker(&w1);
    ws.executeWorkDay();
    w1.~Worker();
    s->use();

    // h->~Hammer();
    // s->~Shovel();

}