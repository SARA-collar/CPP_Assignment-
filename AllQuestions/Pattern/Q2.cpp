/*2. Write a program in C++ to display the pattern like right angle triangle with number.
Sample Output:
Input number of rows: 5
1
12
123
1234
12345*/


#include <iostream>
using namespace std;

class Pattern {
public:
    void numberTriangle(int rows) {
        for (int i = 1; i <= rows; i++) {
            for (int j = 1; j <= i; j++) {
                cout << j;
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

    pattern.numberTriangle(rows);

    return 0;
}