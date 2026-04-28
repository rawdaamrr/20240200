#ifndef EMPLOYEEVIEW_H
#define EMPLOYEEVIEW_H

#include <iostream>
#include "Employee.cpp"

using namespace std;

class EmployeeView {
public:
    void printEmployeeDetails(Employee e) {
        cout << "\nID    : " << e.getId()    << "\n";
        cout << "Name  : " << e.getName()  << "\n";
        cout << "Email : " << e.getEmail() << "\n";
    }
};

#endif