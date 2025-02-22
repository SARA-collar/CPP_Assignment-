/*7. Write a C++ program to implement a recursive function to find the sum of all prime
numbers in a given range.*/


#include <iostream>
using namespace std;


bool isPrime(int num) {
    if (num <= 1) return false; 
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false; 
    }
    return true; 
}


int sumOfPrimes(int start, int end) {
    if (start > end) {
        return 0; 
    }
    
    if (isPrime(start)) {
        return start + sumOfPrimes(start + 1, end); 
    }
    return sumOfPrimes(start + 1, end); 
}

int main() {
    int start, end;

    cout << "Enter the starting number of the range: ";
    cin >> start;
    cout << "Enter the ending number of the range: ";
    cin >> end;

    int primeSum = sumOfPrimes(start, end);

    cout << "Sum of prime numbers in the range [" << start << ", " << end << "] is: " << primeSum << endl;

    return 0;
}