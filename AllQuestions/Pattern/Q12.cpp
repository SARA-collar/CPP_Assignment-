/*12. Write a program in C++ to display such a pattern for n number of rows using
numbers. There will be odd numbers in each row. The first and last number of each
row will be 1 and the middle column will be the row number. N numbers of columns
will appear in the 1st row.
Sample Output:
Input number of rows: 7
 1234567654321
 12345654321
 123454321
 1234321
 12321
 121
 1*/

 #include <iostream>
using namespace std;

class NumberPattern {
public:
    void printPattern(int rows) {
        for (int i = rows; i >= 1; i--) {
            // Print leading spaces
            for (int j = 0; j < rows - i; j++) {
                cout << " ";
            }
            // Print increasing numbers
            for (int j = 1; j <= i; j++) {
                cout << j;
            }
            // Print decreasing numbers
            for (int j = i - 1; j >= 1; j--) {
                cout << j;
            }
            cout << endl;
        }
    }
};

int main() {
    NumberPattern pattern;
    int rows;

    cout << "Input number of rows: ";
    cin >> rows;

    pattern.printPattern(rows);

    return 0;
}