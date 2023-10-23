#include <iostream>
#include "Shovel.hpp"
#include "Hammer.hpp"
#include "Worker.hpp"
#include "Workshop.hpp"


int main() {

    list<Workshop*> ws_list;
    Workshop ws = Workshop();
    Workshop ws1 = Workshop();
    Workshop ws2 = Workshop();
    ws_list.push_back(&ws);
    ws_list.push_back(&ws1);
    ws_list.push_back(&ws2);


    Shovel* s = new Shovel();
    Hammer* h = new Hammer();

    Worker w1 = Worker("Ramiro");
    Worker w2 = Worker("Julinho");
    cout << w1 << endl;
    cout << w2 << endl;
    w1.takeTool(s, &w1);
    cout << w1.getName() << " pegou a pá" << endl;
    w2.takeTool(h, &w2);
    cout << w2.getName() << " pegou o martelo" << endl;

    w1.subscribeWorkshops(ws_list);
    ws.subscribeWorker(&w1);
    ws.subscribeWorker(&w2);
    ws.executeworkDay();
    w2.takeTool(s, &w1);
    cout << "O trabalhador " << w2.getName() << " pegou a pá do " << w1.getName() << endl;
    ws.executeworkDay();
    ws.unsubscribeWorker(&w1);
    ws.executeworkDay();
}