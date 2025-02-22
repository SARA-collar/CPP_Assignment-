/*2. Write a program in C++ to find the last prime number that occurs before the entered
number.
Input a number to find the last prime number occurs before the number: 50
47 is the last prime number before 50*/

#include <iostream>
using namespace std;

class PrimeFinder {
public:
    bool isPrime(int num) {
        if (num <= 1) return false;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                return false;
            }
        }
        return true;
    }

    int findLastPrime(int limit) {
        for (int num = limit - 1; num >= 2; num--) {
            if (isPrime(num)) {
                return num;
            }
        }
        return -1; 
    }
};

int main() {
    PrimeFinder obj;
    int num;

    cout << "Input a number to find the last prime number occurs before the number: ";
    cin >> num;

    int lastPrime = obj.findLastPrime(num);
    if (lastPrime != -1) {
        cout << lastPrime << " is the last prime number before " << num << endl;
    } else {
        cout << "There are no prime numbers before " << num << endl;
    }

    return 0;
}