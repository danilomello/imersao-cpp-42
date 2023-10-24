#ifndef EMPLOYEE_MANAGER_H
#define EMPLOYEE_MANAGER_H

#include "employee.hpp"
#include <list>

using namespace std;

class EmployeeManager {

    private:
        list<Employee*> employees;

    public:
        EmployeeManager(){};
        ~EmployeeManager(){};

        void add_employee(Employee* employee) {
            this->employees.push_back(employee);
        }

        void remove_employee(Employee* employee) {
            this->employees.remove(employee);
        }

        void execute_workday() {
            for (list<Employee*>::iterator it = employees.begin(); it != employees.end(); ++it)
            {
                (*it)->execute_workday();
            }
        }

        void calculate_payroll() {
            for (list<Employee*>::iterator it = employees.begin(); it != employees.end(); ++it)
            {
                (*it)->calculate_payment();
            }
        }

};

#endif