#ifndef NEED_COURSE_CREATION_FORM_H
#define NEED_COURSE_CREATION_FORM_H

#include <iostream>
#include "Form.hpp"

using namespace std;
class NeedCourseCreationForm : public Form
{
    private:
        /* data */
    public:
        void execute(){
            cout << "Preenchendo formulário de criação de curso" << endl;
        };
        NeedCourseCreationForm(/* args */){};
        ~NeedCourseCreationForm(){};
};

#endif