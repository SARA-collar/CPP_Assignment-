/*Basics
1. Write a C++ program that accepts the user's first and last name and prints them in
reverse order with a space between them.
Input First Name: John
Input Last Name: Doe
Name in reverse is: Doe John*/

#include <iostream>
using namespace std;

class NameReverser {
private:
    string firstName, lastName;

public:
    NameReverser(string f, string l) {
        firstName = f;
        lastName = l;
    }

    void printReversed() {
        cout << "Name in reverse is: " << lastName << " " << firstName << endl;
    }
};

int main() {
    string first, last;
    cout << "Input First Name: ";
    cin >> first;
    cout << "Input Last Name: ";
    cin >> last;

    NameReverser name(first, last);
    name.printReversed();

    return 0;
}