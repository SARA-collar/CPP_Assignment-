/*8. Write a C++ program to print a pattern in which the highest number of columns
appears in the first row.
Sample Output:
Input the number of rows: 5
12345
2345
345
45
5*/
#include <iostream>
using namespace std;

class Pattern {
public:
    void printPattern(int rows) {
        for (int i = 0; i < rows; i++) {
            // Print leading spaces
            for (int j = 0; j < i; j++) {
                cout << " ";
            }
            // Print numbers
            for (int j = 1; j <= rows - i; j++) {
                cout << j;
            }
            cout << endl;
        }
    }
};

int main() {
    Pattern p;
    int rows;

    cout << "Input number of rows: ";
    cin >> rows;

    p.printPattern(rows);

    return 0;
}