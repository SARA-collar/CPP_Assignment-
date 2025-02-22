//WAP to calculate the net salary of an employee under the following condition:
//a. If salary greater than 20,000 and less than equal to 25,000; Bonus is 15%
//b. If salary is less than equal to 20,000; Bonus is 10%
//c. Else bonus is 5%

#include <iostream>
using namespace std;

class Employee {
private:
    double salary;

public:
    void getSalary() {
        cout << "Enter salary: ";
        cin >> salary;
    }

    double calculateNetSalary() {
        double bonusPercentage;
        if (salary > 20000 && salary <= 25000) {
            bonusPercentage = 0.15;
        } else if (salary <= 20000) {
            bonusPercentage = 0.10;
        } else {
            bonusPercentage = 0.05;
        }
        double bonus = salary * bonusPercentage;
        return salary + bonus;
    }

    void displayNetSalary() {
        cout << "Net Salary: " << calculateNetSalary() << endl;
    }
};

int main() {
    Employee emp;
    emp.getSalary();
    emp.displayNetSalary();
    return 0;
}
