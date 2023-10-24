#ifndef EMPLOYEE_H
#define EMPLOYEE_H

using namespace std;

class Employee {

    protected:
        int hourly_value;
        
    public:
        virtual void execute_workday() = 0;
        virtual void calculate_payment() = 0;
};

#endif