/*7. Write a program in C++ to display the first n terms of the Fibonacci series.
Sample Output:
Input number of terms to display: 10
Here is the Fibonacci series upto to 10 terms:
0 1 1 2 3 5 8 13 21 34*/

#include <iostream>
using namespace std;

class FibonacciSeries {
public:
    void displayFibonacci(int terms) {
        int a = 0, b = 1; 
        cout << "Here is the Fibonacci series up to " << terms << " terms:" << endl;
        
        for (int i = 0; i < terms; i++) {
            cout << a << " "; 
            int next = a + b; 
            a = b; 
            b = next; 
        }
        cout << endl; 
    }
};

int main() {
    FibonacciSeries obj;
    int terms;

    cout << "Input number of terms to display: ";
    cin >> terms;

    obj.displayFibonacci(terms);

    return 0;
}