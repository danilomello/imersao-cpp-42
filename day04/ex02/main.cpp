
#include "CourseFinishedForm.hpp"
#include "NeedCourseCreationForm.hpp"
#include "NeedMoreClassRoomForm.hpp"
#include "SubscriptionToCourseForm.hpp"
#include "Form.hpp"
#include "FormType.hpp"
#include "Secretary.hpp"
#include "Headmaster.hpp"

using namespace std;

int main() {
    Headmaster headmaster = Headmaster();
    Secretary secretary = Secretary();
    Form* form1 = secretary.createForm(CourseFinished);
    Form* form2 = secretary.createForm(SubscriptionToCourse);

    headmaster.receiveForm(form1);
    headmaster.receiveForm(form2);
    headmaster.sign(form1);
    headmaster.signAll();
}