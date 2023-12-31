#ifndef FORM_H
#define FORM_H


enum FormType {
	CourseFinished,
	NeedMoreClassRoom,
	NeedCourseCreation,
	SubscriptionToCourse
};
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