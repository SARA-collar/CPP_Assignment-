/*11. Write a C++ program to display the pattern like right angle triangle with right justified
digits.
Sample Output:
Input number of rows: 5
 1
 21
 321
4321
54321*/

#include <iostream>
using namespace std;

class RightAngledTriangle {
public:
    void printPattern(int rows) {
        for (int i = 1; i <= rows; i++) {
            // Print leading spaces
            for (int j = i; j < rows; j++) {
                cout << " ";
            }
            // Print digits in decreasing order
            for (int j = i; j >= 1; j--) {
                cout << j;
            }
            cout << endl;
        }
    }
};

int main() {
    RightAngledTriangle triangle;
    int rows;

    cout << "Input number of rows: ";
    cin >> rows;

    triangle.printPattern(rows);

    return 0;
}
