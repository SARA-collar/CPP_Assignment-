/*6. Write a C++ program to print Floyd's Triangle.
Sample Output:
Input number of rows: 5
1
01
101
0101
10101*/

#include <iostream>
using namespace std;

class FloydsTriangle {
public:
    void printTriangle(int rows) {
        int num = 1;
        for (int i = 1; i <= rows; i++) {
            for (int j = 1; j <= i; j++) {
                cout << num % 2;
                num++;
            }
            cout << endl;
        }
    }
};

int main() {
    FloydsTriangle triangle;
    int rows;

    cout << "Input number of rows: ";
    cin >> rows;

    triangle.printTriangle(rows);

    return 0;
}