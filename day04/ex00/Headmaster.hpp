#ifndef HEADMASTER_H
#define HEADMASTER_H

#include "Staff.hpp"
#include "Form.hpp"

class Headmaster : public Staff{
    private:
        std::vector<Form*> _formToValidate;
    public:
        void receiveForm(Form* p_form);
        Headmaster(/* args */){};
        ~Headmaster(){};
};

#endif