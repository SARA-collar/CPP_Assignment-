/*7. Write a C++ program that removes a specific character from a given string. Return
the updated string.
Test Data:
("Filename", "e") -> "Filnam"
("Compilation Time", "i") -> "Complaton Tme"*/



#include <iostream>
#include <string>
using namespace std;

class StringManipulator {
public:
    string removeCharacter(const string& str, char ch) {
        string result;
        for (char current : str) {
            if (current != ch) {
                result += current; 
            }
        }
        return result;
    }
};

int main() {
    StringManipulator manipulator;
    string inputString;
    char charToRemove;

    // Test data
    string testData1 = "Filename";
    char char1 = 'e';
    string result1 = manipulator.removeCharacter(testData1, char1);
    cout << "Input: (" << testData1 << ", '" << char1 << "') -> Output: " << result1 << endl;

    string testData2 = "Compilation Time";
    char char2 = 'i';
    string result2 = manipulator.removeCharacter(testData2, char2);
    cout << "Input: (" << testData2 << ", '" << char2 << "') -> Output: " << result2 << endl;

    return 0;
}
