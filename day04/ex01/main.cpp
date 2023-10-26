#include <iostream>
#include "Singletons.hpp"
#include "../ex00/Course.hpp"
#include "../ex00/Secretary.hpp"
#include "../ex00/SecretarialOffice.hpp"
#include "../ex00/Student.hpp"

using namespace std;

int main() {
    
    cout << "It's ALIVE!" << endl;

    CourseList& cl1 = CourseList::getInstance();
    CourseList& cl2 = CourseList::getInstance();
    Course c1 = Course("name");
    cl1.add_item(&c1);

    StaffList& staffList = StaffList::getInstance();
    Secretary secretary = Secretary();
    staffList.add_item(&secretary);

    SecretarialOffice secOffice = SecretarialOffice();
    RoomList& roomList = RoomList::getInstance();
    roomList.add_item(&secOffice);

    StudentList& studentList = StudentList::getInstance();
    Student student = Student();
    studentList.add_item(&student);

    
    if (&cl1 == &cl2) {
        std::cout << "Both instances are the same. This is a singleton." << std::endl;
    } else {
        std::cout << "Instances are not the same. Singleton pattern is violated." << std::endl;
    }
    return 0;
}