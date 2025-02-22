/*3. Write a C++ program to implement a class called Student that has private member
variables for name, class, roll number, and marks. Include member functions to
calculate the grade based on the marks and display the student's information. */


#include <iostream>
using namespace std;

class Student {
private:
    string name;
    string studentClass;
    int rollNumber;
    double marks;

public:
    Student(string n, string c, int roll, double m) {
        name = n;
        studentClass = c;
        rollNumber = roll;
        marks = m;
    }

    char calculateGrade() {
        if (marks >= 90) return 'A';
        else if (marks >= 75) return 'B';
        else if (marks >= 60) return 'C';
        else if (marks >= 40) return 'D';
        else return 'F';
    }

    void displayInfo() {
        cout << "Student Name: " << name << endl;
        cout << "Class: " << studentClass << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculateGrade() << endl;
    }
};

int main() {
    string name, studentClass;
    int roll;
    double marks;

    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter class: ";
    cin >> studentClass;
    cout << "Enter roll number: ";
    cin >> roll;
    cout << "Enter marks: ";
    cin >> marks;

    Student student(name, studentClass, roll, marks);
    student.displayInfo();

    return 0;
}