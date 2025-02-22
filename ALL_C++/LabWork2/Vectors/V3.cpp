#include <iostream>
#include <vector>
using namespace std;

class StringVector {
public:
    void printStrings(vector<string>& words) {
        for (const string& word : words) {
            cout << word << " ";
        }
        cout << endl;
    }
};

int main() {
    StringVector printer;
    vector<string> words = {"Hello", "World", "C++", "Vectors"};

    printer.printStrings(words);

    return 0;
}
