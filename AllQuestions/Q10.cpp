/*10. Write a C++ program to add repeatedly all digits of a given non-negative number
until the result has only one digit.
Example:
Sample Input: 58
Sample Output: 4
Explanation: The formula is like: 5 + 8 = 13, 1 + 3 = 4*/

#include <iostream>
using namespace std;

class DigitalRoot {
private:
    int number;

public:
    DigitalRoot(int num) {
        number = num;
    }

    int computeRoot() {
        while (number >= 10) {
            int sum = 0, temp = number;
            while (temp > 0) {
                sum += temp % 10;
                temp /= 10;
            }
            number = sum;
        }
        return number;
    }

    void display() {
        cout << "Final single digit: " << computeRoot() << endl;
    }
};

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    DigitalRoot obj(num);
    obj.display();

    return 0;
}