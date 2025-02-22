/*1. Write a C++ program to implement a class called Employee that has private
member variables for name, employee ID, and salary. Include member functions to
calculate and set salary based on employee performance. */
#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    int employeeID;
    double salary;

public:
    Employee(string n, int id, double s) {
        name = n;
        employeeID = id;
        salary = s;
    }

    void setSalary(double performanceRating) {
        if (performanceRating >= 4.5) {
            salary += salary * 0.20;  
        } else if (performanceRating >= 3.0) {
            salary += salary * 0.10;  
        } else {
            salary += salary * 0.05;  
        }
    }

    void display() {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Updated Salary: $" << salary << endl;
    }
};

int main() {
    Employee emp("John Doe", 101, 50000);

    double performance;
    cout << "Enter performance rating (1-5): ";
    cin >> performance;

    emp.setSalary(performance);
    emp.display();

    return 0;
}