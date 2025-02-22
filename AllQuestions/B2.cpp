/*
2. Write a C++ program that swaps two variables without using a third variable.
Sample Output:
Input 1st number : 25
Input 2nd number : 20
After swapping the 1st number is : 20
After swapping the 2nd number is : 25*/

#include <iostream>
using namespace std;

class SwapNumbers {
private:
    int num1, num2;

public:
    SwapNumbers(int a, int b) {
        num1 = a;
        num2 = b;
    }

    void swapValues() {
        num1 = num1 + num2;
        num2 = num1 - num2;
        num1 = num1 - num2;
    }

    void display() {
        cout << "After swapping the 1st number is : " << num1 << endl;
        cout << "After swapping the 2nd number is : " << num2 << endl;
    }
};

int main() {
    int a, b;
    cout << "Input 1st number: ";
    cin >> a;
    cout << "Input 2nd number: ";
    cin >> b;

    SwapNumbers swapper(a, b);
    swapper.swapValues();
    swapper.display();

    return 0;
}