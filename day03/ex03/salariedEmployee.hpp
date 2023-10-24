#ifndef SALARIED_EMPLOYEE_H
#define SALARIED_EMPLOYEE_H

#include <iostream>
#include <cstring>
#include "employee.hpp"

using namespace std;

class ContractEmployee: public Employee {

    private:
        int worked_days;
        int absent_hours;
        int wage;
        string name;

    public:

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

#endif