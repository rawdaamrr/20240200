#include <iostream>
#include <string>
#include "Employee.cpp"
#include "EmployeeView.cpp"
#include "EmployeeController.cpp"

using namespace std;

int main() {
    Employee model(0, "", "");
    EmployeeView view;
    EmployeeController controller(model, view);

    int choice;
    do {
        cout << "\n1. Store Employee Data\n";
        cout << "2. Edit Employee Data\n";
        cout << "3. Display Employee Data\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore();

        if (choice == 1) {
            int id;
            string name, email;
            cout << "Enter ID: ";    cin >> id; cin.ignore();
            cout << "Enter Name: ";  getline(cin, name);
            cout << "Enter Email: "; getline(cin, email);
            controller.setEmployeeId(id);
            controller.setEmployeeName(name);
            controller.setEmployeeEmail(email);
            cout << "Employee stored successfully.\n";

        } else if (choice == 2) {
            int field;
            cout << "\nWhat to edit?\n";
            cout << "1. Name\n2. Email\n3. ID\n";
            cout << "Enter choice: "; cin >> field; cin.ignore();
            if (field == 1) {
                string name;
                cout << "Enter new Name: "; getline(cin, name);
                controller.setEmployeeName(name);
            } else if (field == 2) {
                string email;
                cout << "Enter new Email: "; getline(cin, email);
                controller.setEmployeeEmail(email);
            } else if (field == 3) {
                int id;
                cout << "Enter new ID: "; cin >> id;
                controller.setEmployeeId(id);
            }
            cout << "Employee updated successfully.\n";

        } else if (choice == 3) {
            controller.view();

        } else if (choice == 4) {
            cout << "Goodbye!\n";

        } else {
            cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 4);

    return 0;
}