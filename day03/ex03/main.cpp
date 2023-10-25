#include "salariedEmployee.hpp"
#include "hourlyEmployee.hpp"
#include "employeeManagement.hpp"

using namespace std;

int main() {

    ContractEmployee* ce = new ContractEmployee("contratado 1", 2000);
    TempWorker* tw = new TempWorker("temporário 1", 100);
    Apprentice* ap = new Apprentice("aprendiz 1", 1000, 150);

    EmployeeManager em = EmployeeManager();
    em.add_employee(ce);
    em.add_employee(tw);
    em.add_employee(ap);

    ce->add_absent_hours(10);
    tw->mobilise(100);

    em.execute_workday();
    em.execute_workday();
    em.execute_workday();

    em.calculate_payroll();

    return 0;
}