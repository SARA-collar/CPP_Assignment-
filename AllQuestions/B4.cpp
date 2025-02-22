/*4. Write a C++ program to add up all the digits between two given integers. Add all the
digits between 11 and 16 and it should be inclusive of the two numbers.
Example: Add up all the digits between 39 and 41 is: 21
Sample Data
(5, 9) -> 35
(12, 18) -> 42
(39, 41) -> 21
*/

#include <iostream>
using namespace std;

class SumDigits {
private:
    int start, end;

public:
    SumDigits(int s, int e) {
        start = s;
        end = e;
    }

    int calculateSum() {
        int total = 0;
        for (int i = start; i <= end; i++) {
            int num = i;
            while (num > 0) {
                total += num % 10;
                num /= 10;
            }
        }
        return total;
    }

    void display() {
        cout << "Sum of digits between " << start << " and " << end << " is: " << calculateSum() << endl;
    }
};

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    SumDigits obj(a, b);
    obj.display();

    return 0;
}