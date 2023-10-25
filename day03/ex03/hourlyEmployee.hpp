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
        int working_hours;
        string name;

    public:

        TempWorker(string name, int hour_value) {
            this->worked_days = 0;
            this->hour_value = hour_value;
            this->name = name;
            this->working_hours = 0;
        }

        void mobilise(int hours) {
            this->working_hours+=hours;
        }

        virtual void execute_workday() {
            this->worked_days++;
        }

        virtual void calculate_payment() {
            cout << "Pagamento do trabalhador " << this->name << ": " << 
                ((worked_days * 7 + working_hours) * hour_value) << endl;
        }


};

#endif