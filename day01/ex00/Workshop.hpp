#include <iostream>
#include <list>
#include "Worker.hpp"

#ifndef WORKSHOP_H
#define WORKSHOP_H

class Workshop {

    private:
    list<class Worker*> workers;

    public:
    Workshop();
    Workshop(Tool tool);
    void subscribeWorker(Worker* worker);
    void unsubscribeWorker(Worker* worker);
    void executeworkDay(); //notify

};


#endif