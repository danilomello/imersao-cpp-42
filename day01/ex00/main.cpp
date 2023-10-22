#include <iostream>
#include "Shovel.hpp"
#include "Hammer.hpp"
#include "Worker.hpp"
#include "Workshop.hpp"


int main() {

    // list<Workshop*> ws_list;
    Workshop ws = Workshop();
    // Workshop ws1 = Workshop();
    // Workshop ws2 = Workshop();
    // ws_list.push_back(&ws);
    // ws_list.push_back(&ws1);
    // ws_list.push_back(&ws2);


    Shovel* s = new Shovel();
    Hammer* h = new Hammer();

    Worker w1 = Worker("Ramiro");
    w1.takeTool(s, &w1);
    // w1.takeTool(h, &w1);
    w1.GetTool<Shovel>(s);
    // w1.subscribeWorkshops(ws_list);
    // Worker w2 = Worker("Julinho");
    // cout << w2 << endl;

    // w2.takeTool(h, &w2);
    // // w2.getTool(s, &w1);

    // ws.subscribeWorker(&w1);
    // ws.subscribeWorker(&w2);
    // ws.executeworkDay();
    // ws.unsubscribeWorker(&w1);
    // ws.executeworkDay();

    w1.~Worker();
    s->use();
    h->use();

}