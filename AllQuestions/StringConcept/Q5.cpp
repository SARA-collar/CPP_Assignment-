/*5. Write a C++ program to find a word in a given string that has the highest number of
repeated letters.
Example:
Sample Input: Print a welcome text in a separate line.
Sample Output: Word which has the highest number of repeated letters. Separate*/

#include <iostream>
#include <string>
#include <sstream>
#include <unordered_map>
using namespace std;

class HighestRepeatedLetters {
public:
    string findWordWithHighestRepeats(const string& str) {
        stringstream ss(str);
        string word, result;
        int maxRepeats = 0;

        while (ss >> word) {
            int repeats = countMaxRepeats(word);
            if (repeats > maxRepeats) {
                maxRepeats = repeats;
                result = word;
            }
        }
        return result;
    }

private:
    int countMaxRepeats(const string& word) {
        unordered_map<char, int> charCount;
        int maxCount = 0;

        for (char ch : word) {
            charCount[ch]++;
            maxCount = max(maxCount, charCount[ch]);
        }

        return maxCount > 1 ? maxCount : 0; // Return 0 if no repeats
    }
};

int main() {
    HighestRepeatedLetters finder;
    string input;

    cout << "Sample Input: ";
    getline(cin, input);

    string result = finder.findWordWithHighestRepeats(input);
    cout << "Sample Output: Word which has the highest number of repeated letters: " << result << endl;

    return 0;
}