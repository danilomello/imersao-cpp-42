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
        // virtual ~Hammer() {};
        ~Hammer() {
            Tool::~Tool();
        };

        virtual void use() {
            cout << "Batendo feliz." << endl;
            numberOfUse++;
        }
};

#endif

