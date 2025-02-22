/*5. Write a C++ program to make such a pattern, like a pyramid, with a repeating
number.
Sample Output:
Input number of rows: 5
 1
 2 2
 3 3 3
 4 4 4 4
 5 5 5 5 5*/


 #include <iostream>
using namespace std;

class Pattern {
public:
    void numberPyramid(int rows) {
        for (int i = 1; i <= rows; i++) {
            for (int j = 1; j <= rows - i; j++) {
                cout << " ";
            }
            for (int k = 1; k <= i; k++) {
                cout << i << " ";
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

    pattern.numberPyramid(rows);

    return 0;
}