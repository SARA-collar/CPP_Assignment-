/*17. Write a program in C++ to find the two's complement of a binary number.
Sample Output:
Input a 8 bit binary value: 01101110
The original binary = 01101110
After ones complement the value = 10010001
After twos complement the value = 10010010*/


#include <iostream>
#include <algorithm>
using namespace std;

class TwosComplement {
public:
    string findOnesComplement(string binary) {
        for (char &bit : binary) {
            bit = (bit == '0') ? '1' : '0';
        }
        return binary;
    }

    string findTwosComplement(string binary) {
        binary = findOnesComplement(binary);
        int n = binary.length();
        
        for (int i = n - 1; i >= 0; i--) {
            if (binary[i] == '0') {
                binary[i] = '1';
                break;
            } else {
                binary[i] = '0';
            }
        }
        
        return binary;
    }
};

int main() {
    TwosComplement obj;
    string binary;

    cout << "Input an 8-bit binary value: ";
    cin >> binary;

    string onesComp = obj.findOnesComplement(binary);
    string twosComp = obj.findTwosComplement(binary);

    cout << "The original binary = " << binary << endl;
    cout << "After one's complement the value = " << onesComp << endl;
    cout << "After two's complement the value = " << twosComp << endl;

    return 0;
}
