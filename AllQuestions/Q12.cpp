/*12. Write a C++ program to compute the square root of a given non-negative integer.
Return type should be an integer.
Sample Input: n = 81
Sample Output: Square root of 81 = 9
Input: n = 8
Output: Square root of 8 = 2*/


#include <iostream>
using namespace std;

class SquareRootCalculator {
public:
    int computeSquareRoot(int n) {
        int left = 0, right = n;
        int result = 0;

        while (left <= right) {
            int mid = left + (right - left) / 2; 
            if (mid * mid == n) {
                return mid; 
            } else if (mid * mid < n) {
                result = mid; 
                left = mid + 1;
            } else {
                right = mid - 1; 
            }
        }
        return result; 
    }
};

int main() {
    SquareRootCalculator obj;
    int n;

    cout << "Enter a non-negative integer: ";
    cin >> n; 
    if (n < 0) {
        cout << "Please enter a non-negative integer." << endl;
    } else {
        int squareRoot = obj.computeSquareRoot(n);
        cout << "Square root of " << n << " = " << squareRoot << endl; 
    
    return 0;
}