#ifndef ROOM_H
#define ROOM_H

#include <vector>
#include <iostream>
class Student;
class Professor;

enum Event
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
    Room(){
		this->_maximumNumberOfStudent = 0;
		this->_numberOfClassToGraduate = 0;
	};
    ~Room(){};

	Professor* getResponsible() {return this->_responsable;};
};

#endif