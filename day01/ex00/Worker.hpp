#ifndef WORKER_H
# define WORKER_H

# include <iostream>
# include "Shovel.hpp"
class Shovel;

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
    Shovel* shovel;

    public:
    Worker();
    void grabShovel(Shovel* shovel);
    void dropShovel();

};


#endif