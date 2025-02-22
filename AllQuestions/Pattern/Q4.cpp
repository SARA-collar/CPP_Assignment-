/*4. Write a C++ program to make such a pattern like a pyramid with an asterisk.
Sample Output:
Input number of rows: 5
 *
 * *
 * * *
 * * * *
 * * * * **/


 #include <iostream>
using namespace std;

class Pattern {
public:
    void pyramid(int rows) {
        for (int i = 1; i <= rows; i++) {
            for (int j = 1; j <= rows - i; j++) {
                cout << " ";
            }
            for (int k = 1; k <= i; k++) {
                cout << "* ";
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

    pattern.pyramid(rows);

    return 0;
}