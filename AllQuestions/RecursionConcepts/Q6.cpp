/*6. Write a C++ program to implement a recursive function to calculate the sum of even
and odd numbers in a given range.*/

#include <iostream>
using namespace std;

class SumCalculator {
public:
    
    int sumEven(int start, int end) {
        if (start > end) {
            return 0; 
        }
    
        if (start % 2 == 0) {
            return start + sumEven(start + 1, end);
        }
        return sumEven(start + 1, end); 
    }

    
    int sumOdd(int start, int end) {
        if (start > end) {
            return 0; 
        }
       
        if (start % 2 != 0) {
            return start + sumOdd(start + 1, end); 
        }
        return sumOdd(start + 1, end); 
    }
};

int main() {
    SumCalculator calculator;
    int start, end;

    cout << "Enter the starting number of the range: ";
    cin >> start;
    cout << "Enter the ending number of the range: ";
    cin >> end;

    int evenSum = calculator.sumEven(start, end);
    int oddSum = calculator.sumOdd(start, end);

    cout << "Sum of even numbers in the range [" << start << ", " << end << "] is: " << evenSum << endl;
    cout << "Sum of odd numbers in the range [" << start << ", " << end << "] is: " << oddSum << endl;

    return 0;
}