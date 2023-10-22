#ifndef HAMMER_H
# define HAMMER_H

# include <iostream>
# include "Tool.hpp"

using namespace std;

class Hammer: public Tool {

    private:
        int numberOfUse;

    public:
        Hammer();
        ~Hammer() {
            Tool::~Tool();
        };

        virtual void use() {
            cout << "batendo feliz." << endl;
            numberOfUse++;
        }
};

#endif