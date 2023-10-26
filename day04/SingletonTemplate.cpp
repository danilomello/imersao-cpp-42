#include <iostream>

template <typename T>
class Singleton {
public:
    static T& getInstance() {
        static T instance; // The single instance is created only once
        return instance;
    }

    // Delete the copy constructor and assignment operator
    // Singleton(const Singleton&) = delete;
    // Singleton& operator=(const Singleton&) = delete;

private:
    // Allow derived classes to access the constructor
    Singleton() {}
};

// Example usage:
class MySingleton : public Singleton<MySingleton> {
    // Add your member functions and variables here
};

class MySingletonTwo : public Singleton<MySingleton> {
    // Add your member functions and variables here
};

int main() {
    MySingleton& instance1 = MySingleton::getInstance();
    MySingleton& instance2 = MySingletonTwo::getInstance();


    if (&instance1 == &instance2) {
        std::cout << "Both instances are the same. This is a singleton." << std::endl;
    } else {
        std::cout << "Instances are not the same. Singleton pattern is violated." << std::endl;
    }

    return 0;
}
