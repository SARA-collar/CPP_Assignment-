
//Write a program to enter a number and check if it is even or odd
#include <iostream>
using namespace std;

class NumberChecker {
private:
    int number;

public:
    void getNumber() {
        cout << "Enter a number: ";
        cin >> number;
    }

    void checkEvenOdd() {
        if (number % 2 == 0) {
            cout << number << " is Even." << endl;
        } else {
            cout << number << " is Odd." << endl;
        }
    }
};

int main() {
    NumberChecker obj;
    obj.getNumber();
    obj.checkEvenOdd();
    return 0;
}
