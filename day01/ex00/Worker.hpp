#ifndef WORKER_H
# define WORKER_H

# include <iostream>
# include "Shovel.hpp"
class Shovel;
#include "Workshop.hpp"
class Workshop;
#include <list>
#include <cstring>

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
    list<Workshop*> workshops;
    string name;
    void initWorker();

    public:
    Worker();
    Worker(string name);
    void takeTool(Tool* t, Worker* w);
    void dropTool(Tool* t);
    void work(); //update
    void use();
    void subscribeWorkshops(list<Workshop*> ws);
    void subscribeWorkshops(Workshop* ws);
    // void leaveWorkshops(list<Workshop*> ws);
    string getName();
    Statistic getStats();
    Position getPosition();
    friend std::ostream& operator<< (std::ostream& p_os, Worker p_worker);

};


#endif