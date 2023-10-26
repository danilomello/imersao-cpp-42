#ifndef PERSON_H
#define PERSON_H

#include <cstring>
#include "Room.hpp"

class Person {
    
    private:
        std::string _name;
	    Room* _currentRoom;
    public:
        Person(std::string p_name);
	    Room* room() {return (_currentRoom);}
        ~Person();
};

#endif