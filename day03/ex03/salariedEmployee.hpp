#ifndef SALARIED_EMPLOYEE_H
#define SALARIED_EMPLOYEE_H

#include <iostream>
#include <cstring>
#include "employee.hpp"

using namespace std;

class ContractEmployee: public Employee {

    protected:
        int worked_days;
        int absent_hours;
        int wage;
        string name;

    public:

        ContractEmployee(){
            this->worked_days = 0;
            this->absent_hours = 0;
            this->wage = 2000;
            this->name = "generic name";
        };

        ContractEmployee(string name, int wage) {
            this->worked_days = 0;
            this->absent_hours = 0;
            this->wage = wage;
            this->name = name;
        }

        virtual void execute_workday() {
            this->worked_days++;
        }

        virtual void calculate_payment() {
            cout << "Pagamento do trabalhador " << this->name << ": " << (wage - (absent_hours * 10)) << endl;
        }
};

class Apprentice: public ContractEmployee {

    private:
        int school_hours;

    public:
        Apprentice(string name, int wage, int school_hours) {
            this->school_hours = school_hours;
            this->wage = wage;
            this->name = name;
        }

        virtual void calculate_payment() {
            cout << "Pagamento do trabalhador " << this->name << ": " << (wage - (absent_hours * 10) + (school_hours/2)) << endl;
        }
};

#endif