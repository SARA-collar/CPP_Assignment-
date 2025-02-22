/*3. Write a C++ program to implement a recursive function to get the nth Fibonacci
number.*/

#include <iostream>
using namespace std;

class Fibonacci {
public:
    
    int calculateFibonacci(int n) {
        // Base cases
        if (n == 0) {
            return 0; // Fibonacci(0) = 0
        } else if (n == 1) {
            return 1; // Fibonacci(1) = 1
        } else {
            // Recursive case: Fibonacci(n) = Fibonacci(n - 1) + Fibonacci(n - 2)
            return calculateFibonacci(n - 1) + calculateFibonacci(n - 2);
        }
    }
};

int main() {
    Fibonacci fibonacci;
    int n;

    cout << "Enter a positive integer to find the nth Fibonacci number: ";
    cin >> n;

    if (n < 0) {
        cout << "Please enter a non-negative integer." << endl;
    } else {
        int result = fibonacci.calculateFibonacci(n);
        cout << "The " << n << "th Fibonacci number is: " << result << endl;
    }

    return 0;
}