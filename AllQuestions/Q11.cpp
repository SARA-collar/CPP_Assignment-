/*11. Write a C++ program to check if a given integer is a power of three or not.
Sample Input: 9
Sample Output: true
Sample Input: 15
Sample Output: False*/

#include <iostream>
using namespace std;

class PowerOfThree {
public:
    bool isPowerOfThree(int num) {
        if (num < 1) return false;  // Numbers less than 1 are not powers of three
        while (num % 3 == 0) {
            num /= 3;  // Divide num by 3 until it is no longer divisible
        }
        return num == 1;  // If num becomes 1, it is a power of three
    }
};

int main() {
    PowerOfThree obj;
    int num;
    cout << "Enter a number: ";
    cin >> num;  // Input from the user
    cout << (obj.isPowerOfThree(num) ? "true" : "false") << endl;  // Output result
    return 0;
}