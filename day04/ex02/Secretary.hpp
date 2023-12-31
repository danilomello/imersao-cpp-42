#ifndef SECRETARY_H
#define SECRETARY_H

#include "Staff.hpp"
#include "Course.hpp"
#include "Form.hpp"

class Secretary : public Staff{
    private:
        /* data */
    public:
        Form* createForm(FormType p_formType);
	    void archiveForm(Form* p_form);
        Secretary(/* args */);
        ~Secretary();
};

#endif