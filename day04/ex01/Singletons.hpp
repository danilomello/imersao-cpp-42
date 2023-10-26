#include <cstring>
#include <iostream>
#include <list>
#include "Student.hpp"

using namespace std;

class StudentList {
    public:
        static StudentList& getInstance() {
            if (!instance) {
                instance = new StudentList;
            }
            return *instance;
        }

        void addStudent(Student* student) {
            this->students.push_back(student);
        }

    private:
        StudentList() {}
        StudentList(const StudentList&);
        StudentList& operator=(const StudentList&);

        static StudentList* instance;

        list<Student*> students;
};


StudentList* StudentList::instance = NULL;