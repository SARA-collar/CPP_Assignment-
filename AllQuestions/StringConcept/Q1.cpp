/*1. Write a C++ program to reverse a given string.
Example:
Sample Input: helloworld
Sample Output: dlrowolleh*/

#include <iostream>
#include <string>
using namespace std;

class StringReverser {
public:
    string reverseString(const string& str) {
        string reversedStr = str;  
        int n = reversedStr.length();
        
        
        for (int i = 0; i < n / 2; i++) {
            swap(reversedStr[i], reversedStr[n - i - 1]);
        }
        
        return reversedStr;
    }
};

int main() {
    StringReverser reverser;
    string input;

    cout << "Sample Input: ";
    cin >> input;

    string output = reverser.reverseString(input);
    cout << "Sample Output: " << output << endl;

    return 0;
}