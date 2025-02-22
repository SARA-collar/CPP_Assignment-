/*9. Write a C++ program that displays the pattern with the highest columns in the first
row and digits with the right justified digits.
Sample Output:
Input number of rows: 5
12345
1234
 123
 12
 1 */


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