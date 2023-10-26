#ifndef COURSE_FINISHED_FORM_H
#define COURSE_FINISHED_FORM_H

#include "Form.hpp"

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