#ifndef SUBSCRIPTION_COURSE_FORM_H
#define SUBSCRIPTION_COURSE_FORM_H

#include "Form.hpp"
#include <iostream>

using namespace std;
class SubscriptionToCourseForm : public Form {
    private:
        /* data */
    public:
        void execute(){
            cout << "Preenchendo formulário de inscrição de curso" << endl;
        };
        SubscriptionToCourseForm(/* args */){};
        ~SubscriptionToCourseForm(){};
};

#endif