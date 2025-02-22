/*4. Calculate the:
a. The area of a triangle
b. Perimeter of a triangle*/

#include <iostream>
using namespace std;

class Triangle {
public:
    double calculateArea(double base, double height) {
        return 0.5 * base * height;
    }
    
    double calculatePerimeter(double a, double b, double c) {
        return a + b + c;
    }
};

int main() {
    Triangle triangle;
    double base, height, a, b, c;
    
    cout << "Enter base and height of the triangle: ";
    cin >> base >> height;
    cout << "Area of the triangle: " << triangle.calculateArea(base, height) << endl;
    
    cout << "Enter three sides of the triangle: ";
    cin >> a >> b >> c;
    cout << "Perimeter of the triangle: " << triangle.calculatePerimeter(a, b, c) << endl;
    
    return 0;
}
