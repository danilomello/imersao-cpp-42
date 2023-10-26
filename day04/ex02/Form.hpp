#ifndef FORM_H
#define FORM_H

#include "FormType.hpp"

class Form {
    private:
        FormType _formType;
    public:
        Form(){};
        Form(FormType p_formType)
        {
            this->_formType = p_formType;
        }

        virtual void execute() = 0;
        ~Form(){};
};


#endif