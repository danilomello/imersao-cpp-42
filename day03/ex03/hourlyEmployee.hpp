#ifndef HOURLY_EMPLOYEE_H
#define HOURLY_EMPLOYEE_H

#include <iostream>
#include <cstring>
#include "employee.hpp"

using namespace std;

class TempWorker: public Employee {

    private:
        int worked_days;
        int hour_value;
        string name;

    public:

        TempWorker(string name, int hour_value) {
            this->worked_days = 0;
            this->hour_value = hour_value;
            this->name = name;
        }

        virtual void execute_workday() {
            this->worked_days++;
        }

        virtual void calculate_payment() {
            cout << "Pagamento do trabalhador " << this->name << ": " << (worked_days * hour_value) << endl;
        }


};

#endif