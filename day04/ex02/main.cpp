
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
    Form* form = secretary.createForm(CourseFinished);
    form->execute();
}