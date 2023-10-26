#ifndef STUDENT_H
#define STUDENT_H

#include "Person.hpp"
#include "Course.hpp"
#include "Classroom.hpp"

class Student : public Person {
    private:
        std::vector<Course*> _subscribedCourse;
    public:
        void attendClass(Classroom* p_classroom);
        void exitClass();
        void graduate(Course* p_course);
        Student(/* args */);
        ~Student();
};

#endif