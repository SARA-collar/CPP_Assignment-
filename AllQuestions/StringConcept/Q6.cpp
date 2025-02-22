/*6. Write a C++ program to convert a given non-negative integer into English words.
Example:
Sample Input: 12
Sample Output: Twelve
Sample Input: 29
Sample Output: Twenty Nine*/

#include <iostream>
#include <string>
using namespace std;

class NumberToWords {
public:
    string convertToWords(int num) {
        if (num == 0) return "Zero";
        string words = "";
        if (num / 1000 > 0) {
            words += oneToNineteen(num / 1000) + " Thousand ";
            num %= 1000;
        }
        if (num / 100 > 0) {
            words += oneToNineteen(num / 100) + " Hundred ";
            num %= 100;
        }
        if (num > 0) {
            words += (words.empty() ? "" : "and ") + twoDigits(num);
        }
        return words;
    }

private:
    string oneToNineteen(int num) {
        const string words[] = {
            "Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine",
            "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen",
            "Seventeen", "Eighteen", "Nineteen"
        };
        return words[num];
    }

    string tens(int num) {
        const string words[] = {
            "", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"
        };
        return words[num];
    }

    string twoDigits(int num) {
        if (num < 20) {
            return oneToNineteen(num);
        } else {
            string words = tens(num / 10);
            if (num % 10 > 0) {
                words += " " + oneToNineteen(num % 10);
            }
            return words;
        }
    }
};

int main() {
    NumberToWords converter;
    int input;

    cout << "Sample Input: ";
    cin >> input;

    if (input < 0) {
        cout << "Please enter a non-negative integer." << endl;
        return 1;
    }

    string result = converter.convertToWords(input);
    cout << "Sample Output: " << result << endl;

    return 0;
}