#ifndef EMPLOYEECONTROLLER_H
#define EMPLOYEECONTROLLER_H

#include <string>
#include "Employee.cpp"
#include "EmployeeView.cpp"

using namespace std;

class EmployeeController {
private:
    Employee e;
    EmployeeView ev;

public:
    EmployeeController(Employee e, EmployeeView ev)
        : e(e), ev(ev) {}

    void setEmployeeName(string name)  { e.setName(name); }
    void setEmployeeEmail(string email){ e.setEmail(email); }
    void setEmployeeId(int id)         { e.setId(id); }

    string getEmployeeName()  { return e.getName(); }
    string getEmployeeEmail() { return e.getEmail(); }
    int getEmployeeId()       { return e.getId(); }

    void view() { ev.printEmployeeDetails(e); }
};

#endif