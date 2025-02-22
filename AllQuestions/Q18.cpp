/*18. Write a program in C++ to convert a decimal number to a binary number.
Sample Output:
Input a decimal number: 35
The binary number is: 100011*/


#include <iostream>
using namespace std;

class DecimalToBinary {
public:
    string convertToBinary(int num) {
        string binary = "";
        while (num > 0) {
            binary = char((num % 2) + '0') + binary;
            num /= 2;
        }
        return (binary == "") ? "0" : binary;
    }
};

int main() {
    DecimalToBinary obj;
    int num;

    cout << "Input a decimal number: ";
    cin >> num;

    cout << "The binary number is: " << obj.convertToBinary(num) << endl;

    return 0;
}