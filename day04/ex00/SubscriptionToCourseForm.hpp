#ifndef SUBSCRIPTION_COURSE_FORM_H
#define SUBSCRIPTION_COURSE_FORM_H

#include "Form.hpp"

class SubscriptionToCourseForm : public Form {
    private:
        /* data */
    public:
        void execute();
        SubscriptionToCourseForm(/* args */);
        ~SubscriptionToCourseForm();
};

#endif