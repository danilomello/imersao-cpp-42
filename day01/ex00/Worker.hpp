#ifndef WORKER_H
# define WORKER_H

# include <iostream>
# include "Shovel.hpp"
class Shovel;
#include "Workshop.hpp"
class Workshop;
#include <list>

using namespace std;

class Worker {

    struct Position {
        int x;
        int y;
        int z;
    };

    struct Statistic {
        int level;
        int exp;
    };

    private:
    Position coordonnee;
    Statistic stat;
    list<Tool*> tools;

    public:
    Worker();
    ~Worker(){};
    void getTool(Tool* t);
    // void getToolFromWorker(Tool* t, Worker* w);
    // void getToolFromWorker(Tool* t, std::nullptr_t nullp);
    void dropTool(Tool* t);
    void work(); //update
    void use();

};


#endif