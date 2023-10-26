#include <string>
#include <iostream>
#include <list>
#include "../ex00/Student.hpp"
#include "../ex00/Staff.hpp"
#include "../ex00/Course.hpp"
#include "../ex00/Room.hpp"

using namespace std;

template <typename T, typename U>
class Singleton {
    public:
        static T& getInstance() {
            if (!instance) {
                instance = new T;
            }
            return *instance;
        }

        void add_item(U* item) {
            this->objects.push_back(item);
        }

        void remove_item(U * item) {
            this->objects.remove(item);
        }

        list<U*> getObjects() {
            return this->objects;
        }

    protected:
        Singleton() {}

    private:
        static T* instance;
        list<U*> objects;
};

template <typename T, typename U>
T* Singleton<T, U>::instance = 0;


class StudentList : public Singleton<StudentList, Student> {};

class StaffList : public Singleton<StaffList, Staff> {};

class CourseList : public Singleton<CourseList, Course> {};

class RoomList : public Singleton<RoomList, Room> {};