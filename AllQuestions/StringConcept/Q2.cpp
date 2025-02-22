/*2. Write a C++ program to capitalize the first letter of each word in a given string.
Words must be separated by only one space.
Example:
Sample Input: cpp string exercises
Sample Output: Cpp String Exercises*/


#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class StringCapitalizer {
public:
    string capitalizeWords(const string& str) {
        string result = str;
        bool capitalizeNext = true;

        for (char& ch : result) {
            if (isspace(ch)) {
                capitalizeNext = true;  // Next character should be capitalized
            } else if (capitalizeNext) {
                ch = toupper(ch);  // Capitalize the character
                capitalizeNext = false;  // Reset flag
            }
        }

        return result;
    }
};

int main() {
    StringCapitalizer capitalizer;
    string input;

    cout << "Sample Input: ";
    getline(cin, input);

    string output = capitalizer.capitalizeWords(input);
    cout << "Sample Output: " << output << endl;

    return 0;
}