#ifndef STAFF_H
#define STAFF_H

#include "Person.hpp"
#include "Form.hpp"

class Staff {
    private:
        /* data */
    public:
        void sign(Form* p_form) {
            p_form->execute();
        };
        Staff(/* args */){};
        ~Staff(){};
};

#endif