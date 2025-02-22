/*10. Write a C++ program to find the sum of an A.P. series.
Sample Output:
Input the starting number of the A.P. series: 1
Input the number of items for the A.P. series: 8
Input the common difference of A.P. series: 5
The Sum of the A.P. series are :
1 + 6 + 11 + 16 + 21 + 26 + 31 + 36 = 148*/
#include <iostream>
using namespace std;

class ArithmeticProgression {
public:
    void calculateAPSum(int start, int numberOfTerms, int commonDifference) {
        int sum = 0; 
        int currentTerm = start; 
        cout << "The Sum of the A.P. series are: " << endl;

        for (int i = 0; i < numberOfTerms; i++) {
            cout << currentTerm; 
            sum += currentTerm; 
            if (i < numberOfTerms - 1) {
                cout << " + "; 
            }

            currentTerm += commonDifference; 
        }

        cout << " = " << sum << endl; 
    }
};

int main() {
    ArithmeticProgression ap; 
    int start, numberOfTerms, commonDifference;

    cout << "Input the starting number of the A.P. series: ";
    cin >> start; 
    cout << "Input the number of items for the A.P. series: ";
    cin >> numberOfTerms; 
    cout << "Input the common difference of A.P. series: ";
    cin >> commonDifference; 

    ap.calculateAPSum(start, numberOfTerms, commonDifference); 

    return 0;
}