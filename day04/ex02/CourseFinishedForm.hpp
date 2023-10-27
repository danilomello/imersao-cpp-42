#ifndef COURSE_FINISHED_FORM_H
#define COURSE_FINISHED_FORM_H

#include "Form.hpp"
#include <iostream>

using namespace std;

class CourseFinishedForm : public Form { 
    private:
        /* data */
    public:
        void execute(){
            cout << "Preenchendo formulário de finalização de curso" << endl;
        };
        CourseFinishedForm(/* args */){};
        ~CourseFinishedForm(){};
};

#endif