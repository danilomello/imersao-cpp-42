#ifndef SHOVEL_H
# define SHOVEL_H

# include <iostream>
# include "Tool.hpp"

using namespace std;

class Shovel: public Tool {
    
    private:
        int numberOfUse;
    
    public:
        Shovel();
        ~Shovel() {
            Tool::~Tool();
        };

        virtual void use() {
            cout << "Cavando feliz." << endl;
            numberOfUse++;
        }
};

#endif