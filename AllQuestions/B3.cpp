/*
3. Write a C++ program to swap the first and last digits of any number.
Sample Output:
Input any number: 12345
The number after swapping the first and last digits are: 52341*/

#include <iostream>
#include <string>
using namespace std;

class SwapFirstLastDigit {
private:
    int number;

public:
    SwapFirstLastDigit(int num) {
        number = num;
    }

    int swapDigits() {
        string numStr = to_string(number);
        if (numStr.length() == 1) return number;

        swap(numStr[0], numStr[numStr.length() - 1]);
        return stoi(numStr);
    }

    void display() {
        cout << "The number after swapping the first and last digits is: " << swapDigits() << endl;
    }
};

int main() {
    int num;
    cout << "Input any number: ";
    cin >> num;

    SwapFirstLastDigit swapper(num);
    swapper.display();

    return 0;
}