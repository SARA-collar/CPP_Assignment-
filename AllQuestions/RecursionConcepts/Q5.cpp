/*5. Write a C++ program to implement a recursive function to check if a given string is a
palindrome*/

#include <iostream>
using namespace std;

class PalindromeChecker {
public:
    
    bool isPalindrome(const string& str, int start, int end) {
        
        if (start >= end) {
            return true; // The string is a palindrome
        }
        
        if (str[start] != str[end]) {
            return false; // The string is not a palindrome
        }
        
        return isPalindrome(str, start + 1, end - 1);
    }
};

int main() {
    PalindromeChecker checker;
    string input;

    cout << "Enter a string to check if it's a palindrome: ";
    getline(cin, input); 

    
    bool result = checker.isPalindrome(input, 0, input.length() - 1);

    if (result) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}