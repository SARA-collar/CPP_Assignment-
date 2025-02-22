/*5. Write a C++ program that uses function overloading to:
a. Calculate the area of a triangle when the three sides are given.
b. Calculate the area of the triangle (when base and height are given)
Note: for (b), make use of default argument
We’ll use Heron’s formula to find the area of a triangle in terms of the lengths of its
sides.
𝐴 = √𝑠(𝑠 − 𝑎)(𝑠 − 𝑏)(𝑠 − 𝑐)
• A is the area of the triangle,
• a, b, and c are the lengths of the sides of the triangle,
• s is the semi-perimeter of the triangle,
o calculated as ( s = \frac{a + b + c}{2} ).
 */
#include <iostream>
#include <cmath>
using namespace std;

class Triangle {
public:
    // Function to calculate area using base and height with a default height value
    double calculateArea(double base, double height = 10) {
        return 0.5 * base * height;
    }
    
    // Function to calculate area using Heron's formula
    double calculateArea(double a, double b, double c) {
        double s = (a + b + c) / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }
};

int main() {
    Triangle triangle;
    double base, height, a, b, c;
    
    cout << "Enter base and height of the triangle: ";
    cin >> base >> height;
    cout << "Area of the triangle (base-height): " << triangle.calculateArea(base, height) << endl;
    
    cout << "Enter three sides of the triangle: ";
    cin >> a >> b >> c;
    cout << "Area of the triangle (Heron's formula): " << triangle.calculateArea(a, b, c) << endl;
    
    return 0;
}
