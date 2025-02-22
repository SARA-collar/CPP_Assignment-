/*5. Write a C++ program to list non-prime numbers from 1 to an upperbound.
Sample Output:
Input the upperlimit: 25
The non-prime numbers are:
4 6 8 9 10 12 14 15 16 18 20 21 22 24 25*/

#include <iostream>
using namespace std;

class NonPrimeFinder {
public:
    void displayNonPrimes(int upperLimit) {
        cout << "The non-prime numbers are:" << endl;
        for (int num = 2; num <= upperLimit; num++) {
            if (!isPrime(num)) {
                cout << num << " "; 
            }
        }
        cout << endl;
    }

private:
    bool isPrime(int num) {
        if (num < 2) return false;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                return false; 
            }
        }
        return true;
    }
};

int main() {
    NonPrimeFinder obj;
    int upperLimit;

    cout << "Input the upper limit: ";
    cin >> upperLimit;

    obj.displayNonPrimes(upperLimit);

    return 0;
}
