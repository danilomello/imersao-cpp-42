#ifndef NEED_MORE_CLASSROOM_FORM_H
#define NEED_MORE_CLASSROOM_FORM_H

#include "Form.hpp"

using namespace std;

class NeedMoreClassRoomForm : public Form
{
    private:
        /* data */
    public:
        void execute(){
            cout << "Preenchendo formulário de criação de turma" << endl;
        };
        NeedMoreClassRoomForm(/* args */){};
        ~NeedMoreClassRoomForm(){};
};



#endif