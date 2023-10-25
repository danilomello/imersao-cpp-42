#ifndef SECRETARIALOFFICE_H
#define SECRETARIALOFFICE_H

#include "Room.hpp"
class Form;

class SecretarialOffice : public Room {

    private:
        std::vector<Form*> _archivedForms;

    public:
        SecretarialOffice(/* args */);
        ~SecretarialOffice();
};

#endif