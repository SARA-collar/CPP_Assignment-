/*4. Write a C++ program to create a class called Triangle that has private member
variables for the lengths of its three sides. Implement member functions to
determine if the triangle is equilateral, isosceles, or scalene.*/
#include <iostream>
using namespace std;

class Triangle {
private:
    double side1, side2, side3;

public:
    Triangle(double a, double b, double c) {
        side1 = a;
        side2 = b;
        side3 = c;
    }

    string getType() {
        if (side1 == side2 && side2 == side3) {
            return "Equilateral Triangle";
        } else if (side1 == side2 || side2 == side3 || side1 == side3) {
            return "Isosceles Triangle";
        } else {
            return "Scalene Triangle";
        }
    }

    void displayType() {
        cout << "The triangle is: " << getType() << endl;
    }
};

int main() {
    double a, b, c;
    cout << "Enter three sides of the triangle: ";
    cin >> a >> b >> c;

    Triangle tri(a, b, c);
    tri.displayType();

    return 0;
}