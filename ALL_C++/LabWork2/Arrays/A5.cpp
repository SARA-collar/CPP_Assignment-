#include <iostream>
using namespace std;

class MissingNumberFinder {
public:
    int findMissing(int arr[], int size) {
        int expectedSum = (size + 1) * (size + 2) / 2;
        int actualSum = 0;
        for (int i = 0; i < size; i++) {
            actualSum += arr[i];
        }
        return expectedSum - actualSum;
    }
};

int main() {
    MissingNumberFinder finder;
    int arr[] = {1, 2, 3, 5}; // Missing number is 4
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Missing number: " << finder.findMissing(arr, size) << endl;
    return 0;
}