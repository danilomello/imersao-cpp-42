#ifndef ROOM_H
#define ROOM_H

#include <vector>
#include <iostream>
class Student;
class Professor;

enum class Event
{
	RingBell
};

class Room
{
private:
    std::string _name;
	Professor* _responsable;
	std::vector<Student*> _students;
	int _numberOfClassToGraduate;
	int _maximumNumberOfStudent;
public:
    Room(/* args */);
    ~Room();
};

#endif