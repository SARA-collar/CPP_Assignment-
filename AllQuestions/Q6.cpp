/*6. Write a C++ program to compute the sum of the two given integers and count the
number of digits in the sum value.*/

#include <iostream>
using namespace std;

class SumAndCount {
private:
    int num1, num2;

public:
    SumAndCount(int a, int b) {
        num1 = a;
        num2 = b;
    }

    void compute() {
        int sum = num1 + num2;
        int count = 0, temp = sum;
        while (temp > 0) {
            count++;
            temp /= 10;
        }
        cout << "Sum: " << sum << ", Number of digits: " << count << endl;
    }
};

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    SumAndCount obj(a, b);
    obj.compute();

    return 0;
}