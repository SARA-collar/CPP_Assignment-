/*6. Write a program in C++ to display the cube of the number up to an integer.
Sample Output:
Input the number of terms : 5
Number is : 1 and the cube of 1 is: 1
Number is : 2 and the cube of 2 is: 8
Number is : 3 and the cube of 3 is: 27
Number is : 4 and the cube of 4 is: 64
Number is : 5 and the cube of 5 is: 125*/

#include <iostream>
using namespace std;

class CubeCalculator {
public:
    void displayCubes(int terms) {
        for (int i = 1; i <= terms; i++) {
            cout << "Number is: " << i << " and the cube of " << i << " is: " << cube(i) << endl;
        }
    }

private:
    int cube(int num) {
        return num * num * num; 
    }
};

int main() {
    CubeCalculator obj;
    int terms;

    cout << "Input the number of terms: ";
    cin >> terms;

    obj.displayCubes(terms);

    return 0;
}