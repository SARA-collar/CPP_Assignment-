/*2. Write a C++ program to calculate the factorial of a given number using recursion.*/

#include <iostream>
using namespace std;

class Factorial {
public:
    
    int calculateFactorial(int n) {
        // Base case: factorial of 0 is 1
        if (n == 0) {
            return 1;
        } else {
            // Recursive case: n * factorial of (n - 1)
            return n * calculateFactorial(n - 1);
        }
    }
};

int main() {
    Factorial factorial;
    int number;

    cout << "Enter a number to calculate its factorial: ";
    cin >> number;

    if (number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        int result = factorial.calculateFactorial(number);
        cout << "The factorial of " << number << " is: " << result << endl;
    }

    return 0;
}