#include <iostream>
using namespace std;

class NumberChecker {
public:
    bool exists(int arr[], int size, int num) {
        for (int i = 0; i < size; i++) {
            if (arr[i] == num) {
                return true;
            }
        }
        return false;
    }
};

int main() {
    NumberChecker checker;
    int arr[] = {3, 7, 12, 19, 21};
    int size = sizeof(arr) / sizeof(arr[0]);
    int num;

    cout << "Enter a number to check: ";
    cin >> num;

    if (checker.exists(arr, size, num)) {
        cout << num << " exists in the array." << endl;
    } else {
        cout << num << " does not exist in the array." << endl;
    }
    
    return 0;
}