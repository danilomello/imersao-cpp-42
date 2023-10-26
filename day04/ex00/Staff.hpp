#ifndef STAFF_H
#define STAFF_H

#include "Person.hpp"
class Form;

class Staff {
    private:
        /* data */
    public:
        void sign(Form* p_form);
        Staff(/* args */){};
        ~Staff(){};
};

#endif