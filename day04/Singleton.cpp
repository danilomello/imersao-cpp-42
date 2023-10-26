
#include <cstring>
#include <iostream>

using namespace std;


class Singleton {
public:
    // Accessor function to get the instance of the Singleton
    static Singleton& getInstance() {
        // Check if an instance already exists, and create one if not
        if (!instance) {
            instance = new Singleton;
        }
        return *instance;
    }

    void printa() {
        cout << "olha o singleton" << endl;
    }

    // Other member functions can be added as needed

private:
    // Private constructor to prevent external instantiation
    Singleton() {}

    // Private copy constructor and assignment operator to prevent copies
    Singleton(const Singleton&);
    Singleton& operator=(const Singleton&);

    static Singleton* instance; // The single instance of the Singleton
};

// Initialize the static instance pointer to nullptr
Singleton* Singleton::instance = NULL;




int main()
{
    Singleton& s1 = Singleton::getInstance();
    Singleton& s2 = Singleton::getInstance();
    
    if (&s1 == &s2)
    {
        cout << "SUCESSO: instâncias iguais" << endl;
    } else {
        cout << "ERRO: instâncias não iguais" << endl;
    }
    

    return 0;
}