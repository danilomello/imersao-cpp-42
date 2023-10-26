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
    
    if (&cl1 == &cl2) {
        std::cout << "Both instances are the same. This is a singleton." << std::endl;
    } else {
        std::cout << "Instances are not the same. Singleton pattern is violated." << std::endl;
    }
    return 0;
}