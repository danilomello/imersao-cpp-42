#ifndef SHOVEL_H
# define SHOVEL_H

# include <iostream>
# include "Worker.hpp"
class Worker;

using namespace std;

class Shovel {

    private: 
    Worker& worker;

    public:
    int numberOfUses;
    Shovel();
    void use();
    void setWorker(Worker* worker);
    Worker& getWorker();
};

#endif