#include <iostream>
using namespace std;

class ReverseArray {
public:
    void printReverse(int arr[], int size) {
        for (int i = size - 1; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    ReverseArray reverser;
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Array in reverse order: ";
    reverser.printReverse(arr, size);

    return 0;
}