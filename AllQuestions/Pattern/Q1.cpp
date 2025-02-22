/*Patterns
1. Write a program in C++ to display a pattern like a right angle triangle using an
asterisk.
Sample Output:
Input number of rows: 5
*
**
***
****
******/

#include <iostream>
using namespace std;

class Pattern {
public:
    void rightAngleTriangle(int rows) {
        for (int i = 1; i <= rows; i++) {
            for (int j = 1; j <= i; j++) {
                cout << "*";
            }
            cout << endl;
        }
    }
};

int main() {
    Pattern pattern;
    int rows;

    cout << "Input number of rows: ";
    cin >> rows;

    pattern.rightAngleTriangle(rows);

    return 0;
}