/*Write a temperature conversion program from Celsius to Fahrenheit and vice-versa
depending on choice by the user.*/

#include <iostream>
using namespace std;

class TemperatureConverter {
public:
    void convertToFahrenheit(double celsius) {
        cout << "Temperature in Fahrenheit: " << (celsius * 9/5) + 32 << " F" << endl;
    }
    
    void convertToCelsius(double fahrenheit) {
        cout << "Temperature in Celsius: " << (fahrenheit - 32) * 5/9 << " C" << endl;
    }
};

int main() {
    TemperatureConverter converter;
    int choice;
    double temp;
    
    cout << "Choose conversion: \n1. Celsius to Fahrenheit\n2. Fahrenheit to Celsius\nEnter choice: ";
    cin >> choice;
    
    cout << "Enter temperature: ";
    cin >> temp;
    
    if (choice == 1)
        converter.convertToFahrenheit(temp);
    else if (choice == 2)
        converter.convertToCelsius(temp);
    else
        cout << "Invalid choice!" << endl;
    
    return 0;
}
