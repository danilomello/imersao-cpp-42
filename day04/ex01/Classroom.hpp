#ifndef CLASSROOM_H
#define CLASSROOM_H

#include "Course.hpp"
#include "Room.hpp"

class Classroom : public Room
{
private:
    Course* _currentRoom;

public:
    Classroom();
    ~Classroom();
    void assignCourse(Course* p_course);
};


#endif