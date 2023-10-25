#ifndef CLASSROOM_H
#define CLASSROOM_H

#include "Course.hpp"


class Classroom
{
private:
    Course* _currentRoom;

public:
    Classroom();
    ~Classroom();
    void assignCourse(Course* p_course);
};


#endif