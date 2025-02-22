/*3. Write a C++ program to find the largest word in a given string.
Example:
Sample Input: C++ is a general-purpose programming language.
Sample Output: programming*/

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class LargestWordFinder {
public:
    string findLargestWord(const string& str) {
        stringstream ss(str);
        string word;
        string largestWord = "";

        while (ss >> word) {
            if (word.length() > largestWord.length()) {
                largestWord = word;  // Update largest word
            }
        }

        return largestWord;
    }
};

int main() {
    LargestWordFinder finder;
    string input;

    cout << "Sample Input: ";
    getline(cin, input);

    string output = finder.findLargestWord(input);
    cout << "Sample Output: " << output << endl;

    return 0;
}