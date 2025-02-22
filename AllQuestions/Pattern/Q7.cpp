/*7. Write a C++ program to display Pascal's triangle like a right angle triangle.
Sample Output:
Input number of rows: 7
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1
1 6 15 20 15 6 1*/


#include <iostream>
using namespace std;


int binomialCoeff(int n, int r) {
    if (r == 0 || r == n) 
        return 1;
    return binomialCoeff(n - 1, r - 1) + binomialCoeff(n - 1, r);
}


void printPascalsTriangle(int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {
            cout << binomialCoeff(i, j) << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows;
    cout << "Input number of rows: ";
    cin >> rows;
    
    printPascalsTriangle(rows);
    
    return 0;
}