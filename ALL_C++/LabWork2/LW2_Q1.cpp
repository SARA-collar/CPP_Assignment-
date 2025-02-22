/*Functions
1. Write a recursive function to calculate the factorial of a number
Loops
1. WAP to print even numbers from 1 to 20 using (Using For Loop)
2. WAP to count down from a given number to 0 (Using While loop)
3. WAP to print even numbers from 1 to 20 (Using Do….While loop)
4. WAP to iterate through an array of number (Array and loops)
*/
#include <iostream>
using namespace std;

class FactorialCalculator {
public:
    int factorial(int n) {
        if (n <= 1) {
            return 1;
        }
        return n * factorial(n - 1);
    }
};

int main() {
    FactorialCalculator calculator;
    int num;

    cout << "Enter a number: ";
    cin >> num;

    int result = calculator.factorial(num);
    cout << "Factorial of " << num << " is " << result << "." << endl;

    return 0;
}