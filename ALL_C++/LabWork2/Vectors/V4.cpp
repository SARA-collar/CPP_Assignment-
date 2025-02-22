#include <iostream>
#include <vector>
using namespace std;

class VectorMultiplier {
public:
    void multiplyAndPrint(vector<int>& vec) {
        for (int num : vec) {
            cout << num * 2 << " ";
        }
        cout << endl;
    }
};

int main() {
    VectorMultiplier multiplier;
    vector<int> numbers;
    int n, value;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> value;
        numbers.push_back(value);
    }

    cout << "Multiplied output: ";
    multiplier.multiplyAndPrint(numbers);

    return 0;
}