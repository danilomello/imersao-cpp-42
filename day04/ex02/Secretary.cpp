#include "Secretary.hpp"
#include "Form.hpp"
#include "FormType.hpp"
#include "CourseFinishedForm.hpp"
#include "NeedCourseCreationForm.hpp"
#include "NeedMoreClassRoomForm.hpp"
#include "SubscriptionToCourseForm.hpp"


Form* Secretary::createForm(FormType p_formType) {
    
    Form* form;
    
    switch (p_formType) {

        case CourseFinished:
            form = new CourseFinishedForm();
            break;

        case NeedCourseCreation:
            form = new NeedCourseCreationForm();
            break;
        
        case NeedMoreClassRoom:
            form = new NeedMoreClassRoomForm();
            break;

        case SubscriptionToCourse:
            form = new SubscriptionToCourseForm();

        default:
            break;
    }

    return form;
}

void Secretary::archiveForm(Form* p_form) {
    cout << "Form " << p_form << " está sendo arquivado" << endl;
}

Secretary::Secretary(/* args */){};

Secretary::~Secretary(){};