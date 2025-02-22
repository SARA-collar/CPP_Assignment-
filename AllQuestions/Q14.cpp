/*14. Write a program in C++ to calculate the product of the digits of any number.
Sample Output:
Input a number: 3456
The product of digits of 3456 is: 360*/


#include <iostream>
using namespace std;

class DigitProduct {
public:
    int calculateProduct(int num) {
        int product = 1;
        while (num > 0) {
            product *= num % 10;
            num /= 10;
        }
        return product;
    }
};

int main() {
    DigitProduct obj;
    int num;

    cout << "Input a number: ";
    cin >> num;

    int result = obj.calculateProduct(num);
    cout << "The product of digits of " << num << " is: " << result << endl;

    return 0;
}