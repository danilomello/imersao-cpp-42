#include "Secretary.hpp"
#include "Form.hpp"
#include "FormType.hpp"
#include "CourseFinishedForm.hpp"
#include "NeedCourseCreationForm.hpp"
#include "NeedMoreClassRoomForm.hpp"
#include "SubscriptionToCourseForm.hpp"


Form* Secretary::createForm(FormType p_formType) {
    
    Form* form;

    switch (p_formType)
    {
    default:
        form = new CourseFinishedForm();
        break;
    }

    return form;


    // FormType formType = FormType();
    
    // switch (p_formType)
    // {
    // case 0:
    //     return new CourseFinishedForm();
    //     break;
    // case 1:
    //     return new NeedCourseCreationForm();
    //     break;
    
    // case 2:
    //     return new NeedMoreClassRoomForm();
    //     break;

    // case 3:
    //     return new SubscriptionToCourseForm();

    // default:
    //     break;
    // }
}


void Secretary::archiveForm() {
    return;
}

Secretary::Secretary(/* args */){};

Secretary::~Secretary(){};