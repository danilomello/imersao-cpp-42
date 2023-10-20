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
    ws.executeworkDay();
    ws.unsubscribeWorker(&w1);
    ws.executeworkDay();

}