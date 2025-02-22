/*19. Write a C++ program to convert a binary number to a decimal number.
Sample Output:
Input a binary number: 1011
The decimal number: 11*/


#include <iostream>
#include <cmath>
using namespace std;

class BinaryToDecimal {
public:
    int convertToDecimal(string binary) {
        int decimal = 0, power = 0;
        for (int i = binary.length() - 1; i >= 0; i--) {
            if (binary[i] == '1') {
                decimal += pow(2, power);
            }
            power++;
        }
        return decimal;
    }
};

int main() {
    BinaryToDecimal obj;
    string binary;

    cout << "Input a binary number: ";
    cin >> binary;

    cout << "The decimal number: " << obj.convertToDecimal(binary) << endl;

    return 0;
}