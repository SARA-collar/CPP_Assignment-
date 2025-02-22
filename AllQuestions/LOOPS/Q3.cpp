/*3. Write a program in C++ to find the sum of the series 1 +11 + 111 + 1111 + … up to ‘n’
terms.
Sample Output:
Input number of terms: 5
1 + 11 + 111 + 1111 + 11111
The sum of the series is: 12345*/

#include <iostream>
using namespace std;

class SeriesSum {
public:
    int calculateSum(int n) {
        int sum = 0;
        int term = 0;

        for (int i = 1; i <= n; i++) {
            term = term * 10 + 1; // Generate each term
            sum += term;          // Add term to sum
        }

        return sum;
    }

    void displaySeries(int n) {
        int term = 0;
        cout << "Series: ";

        for (int i = 1; i <= n; i++) {
            term = term * 10 + 1; 
            cout << term;
            if (i < n) {
                cout << " + "; 
            }
        }
        cout << endl;
    }
};

int main() {
    SeriesSum obj;
    int n;

    cout << "Input number of terms: ";
    cin >> n;

    obj.displaySeries(n);
    int sum = obj.calculateSum(n);
    cout << "The sum of the series is: " << sum << endl;

    return 0;
}