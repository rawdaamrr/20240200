#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

using namespace std;

class Employee {
private:
    int id;
    string name;
    string email;

public:
    Employee(int id, string name, string email)
        : id(id), name(name), email(email) {}

    void setName(string name)  { this->name = name; }
    void setEmail(string email){ this->email = email; }
    void setId(int id)         { this->id = id; }

    string getName()  { return name; }
    string getEmail() { return email; }
    int getId()       { return id; }
};

#endif