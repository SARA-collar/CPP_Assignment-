/*7. For n = 10, write a C++ program that reads the integer n and prints its factorial.*/

#include <iostream>
using namespace std;

class Factorial {
private:
    int n;

public:
    Factorial(int num) {
        n = num;
    }

    int computeFactorial() {
        int fact = 1;
        for (int i = 2; i <= n; i++) {
            fact *= i;
        }
        return fact;
    }

    void display() {
        cout << "Factorial of " << n << " is: " << computeFactorial() << endl;
    }
};

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    Factorial obj(num);
    obj.display();

    return 0;
}