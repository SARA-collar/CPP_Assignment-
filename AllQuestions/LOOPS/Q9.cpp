/*9. Write a program in C++ to display the numbers in reverse order.
Sample Output:
Input a number: 12345
The number in reverse order is : 54321*/


#include <iostream>
using namespace std;

class ReverseNumber {
public:
    void displayReverse(int num) {
        int reversedNum = 0;

        while (num > 0) {
            int digit = num % 10; 
            reversedNum = reversedNum * 10 + digit; 
            num /= 10; 
        }

        cout << "The number in reverse order is: " << reversedNum << endl;
    }
};

int main() {
    ReverseNumber obj; 
    int num;
    cout << "Input a number: ";
    cin >> num; 
    obj.displayReverse(num); 
    return 0;
}
