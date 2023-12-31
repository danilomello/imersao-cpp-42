#ifndef HEADMASTER_H
#define HEADMASTER_H

#include "Staff.hpp"
#include "Form.hpp"
#include <list>

using namespace std;

class Headmaster : public Staff{
    
    private:
        list<Form*> _formToValidate;
    
    public:
        Headmaster(){};
        ~Headmaster(){};
        void receiveForm(Form* p_form) {
            this->_formToValidate.push_back(p_form);
        };

        void signAll() {
            for (list<Form*>::iterator it = _formToValidate.begin(); it != _formToValidate.end(); ++it)
            {
                (*it)->execute();
            }
            
        }
};

#endif