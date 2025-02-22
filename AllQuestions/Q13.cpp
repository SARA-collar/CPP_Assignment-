/*13. Write a C++ program to count prime numbers less than a given positive number.
Sample Input: n = 8
Sample Output: Number of prime numbers less than 8 is 2
Sample Input: n = 30
Sample Output: Number of prime numbers less than 30 is 10*/

#include <iostream>
#include <vector>
using namespace std;

class PrimeCounter {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0;
        
        vector<bool> isPrime(n, true);
        isPrime[0] = isPrime[1] = false;
        
        int count = 0;
        for (int i = 2; i < n; i++) {
            if (isPrime[i]) {
                count++;
                for (int j = i * 2; j < n; j += i) {
                    isPrime[j] = false;
                }
            }
        }
        return count;
    }
};

int main() {
    PrimeCounter obj;
    int n;

    cout << "Enter a positive number: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive number greater than 0." << endl;
    } else {
        int primeCount = obj.countPrimes(n);
        cout << "Number of prime numbers less than " << n << " is " << primeCount << endl;
    }

    return 0;
}