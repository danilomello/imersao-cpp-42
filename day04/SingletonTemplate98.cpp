
#include <iostream>

template <typename T>
class Singleton {
    public:
        static T& getInstance() {
            if (!instance) {
                instance = new T;
            }
            return *instance;
        }

    protected:
        Singleton() {}

    private:
        static T* instance;
};

template <typename T>
T* Singleton<T>::instance = 0;

// Example usage:
class MySingleton : public Singleton<MySingleton> {
    // Add your member functions and variables here
};

int main() {
    // MySingleton& instance1 = MySingleton::getInstance();
    MySingleton& instance1 = MySingleton::getInstance();
    MySingleton& instance2 = MySingleton::getInstance();


    if (&instance1 == &instance2) {
        std::cout << "Both instances are the same. This is a singleton." << std::endl;
    } else {
        std::cout << "Instances are not the same. Singleton pattern is violated." << std::endl;
    }

    return 0;
}
