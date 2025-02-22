/*20. Write a program in C++ to convert a decimal number to a hexadecimal number.
Sample Output:
Input a decimal number: 43
The hexadecimal number is : 2B*/

#include <iostream>
using namespace std;

class DecimalToHexadecimal {
public:
    string convertToHex(int num) {
        string hex = "";
        char hexChars[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

        while (num > 0) {
            hex = hexChars[num % 16] + hex;
            num /= 16;
        }
        return (hex == "") ? "0" : hex;
    }
};

int main() {
    DecimalToHexadecimal obj;
    int num;

    cout << "Input a decimal number: ";
    cin >> num;

    cout << "The hexadecimal number is: " << obj.convertToHex(num) << endl;

    return 0;
}