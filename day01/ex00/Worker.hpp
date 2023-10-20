#ifndef WORKER_H
# define WORKER_H

# include <iostream>
# include "Shovel.hpp"
class Shovel;
#include "Workshop.hpp"
class Workshop;

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
    Tool* tool;

    public:
    Worker();
    void getTool(Tool* t);
    Tool* getToolInUse();
    void dropTool();
    void work(); //update
    void use();

};


#endif