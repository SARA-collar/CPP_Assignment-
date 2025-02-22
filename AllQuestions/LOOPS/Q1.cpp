/*Loops
Numeric
1. Write a program in C++ to find the perfect numbers between 1 and 500.
The perfect numbers between 1 to 500 are:
6
28
496
A perfect number is a positive integer that is equal to the sum of its positive proper
divisors, that is, divisors excluding the number itself.
For instance, 6 has proper divisors 1, 2 and 3, and 1 + 2 + 3 = 6, so 6 is a perfect
number.*/

#include <iostream>
using namespace std;

class PerfectNumberFinder {
public:
    bool isPerfect(int num) {
        int sum = 0;
        for (int i = 1; i < num; i++) {
            if (num % i == 0) {
                sum += i;
            }
        }
        return sum == num;
    }

    void findPerfectNumbers(int limit) {
        cout << "The perfect numbers between 1 to " << limit << " are:" << endl;
        for (int i = 1; i <= limit; i++) {
            if (isPerfect(i)) {
                cout << i << endl;
            }
        }
    }
};

int main() {
    PerfectNumberFinder obj;
    obj.findPerfectNumbers(500);
    return 0;
}