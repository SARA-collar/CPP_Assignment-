/*4. Write a C++ program to reverse a string using recursion.*/

#include <iostream>
using namespace std;

class StringReverser {
public:
    
    string reverseString(const string& str, int index) {
        
        if (index < 0) {
            return "";
        }
       
        return str[index] + reverseString(str, index - 1);
    }
};

int main() {
    StringReverser reverser;
    string input;

    cout << "Enter a string to reverse: ";
    getline(cin, input); 

    string reversed = reverser.reverseString(input, input.length() - 1);
    cout << "Reversed string: " << reversed << endl;

    return 0;
}