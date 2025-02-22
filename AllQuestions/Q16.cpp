/*16. Write a program in C++ to find the one's complement of a binary number.
Sample Output:
Input a 8 bit binary value: 10100101
The original binary = 10100101
After ones complement the number = 01011010*/

#include <iostream>
using namespace std;

class OnesComplement {
public:
    string findOnesComplement(string binary) {
        for (char &bit : binary) {
            bit = (bit == '0') ? '1' : '0';
        }
        return binary;
    }
};

int main() {
    OnesComplement obj;
    string binary;

    cout << "Input an 8-bit binary value: ";
    cin >> binary;

    cout << "The original binary = " << binary << endl;
    cout << "After one's complement the number = " << obj.findOnesComplement(binary) << endl;

    return 0;
}