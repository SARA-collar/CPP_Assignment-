/*WAP to find the volume of the cube, cuboid and cylinder using function overloading and
default arguments.*/

#include <iostream>
using namespace std;

class VolumeCalculator {
public:
    // Function to calculate volume of a cube
    double calculateVolume(double side) {
        return side * side * side;
    }
    
    // Function to calculate volume of a cuboid
    double calculateVolume(double length, double width, double height) {
        return length * width * height;
    }
    
    // Function to calculate volume of a cylinder with a default height
    double calculateVolume(double radius, double height, bool isCylinder) {
        return 3.1416 * radius * radius * height;
    }
};

int main() {
    VolumeCalculator vc;
    double side, length, width, height, radius;
    
    cout << "Enter side of cube: ";
    cin >> side;
    cout << "Volume of cube: " << vc.calculateVolume(side) << endl;
    
    cout << "Enter length, width, and height of cuboid: ";
    cin >> length >> width >> height;
    cout << "Volume of cuboid: " << vc.calculateVolume(length, width, height) << endl;
    
    cout << "Enter radius and height of cylinder: ";
    cin >> radius >> height;
    cout << "Volume of cylinder: " << vc.calculateVolume(radius, height, true) << endl;
    
    return 0;
}
