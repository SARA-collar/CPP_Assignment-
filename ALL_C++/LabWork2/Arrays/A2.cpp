#include <iostream>
using namespace std;

class LargestElement {
public:
    int findLargest(int arr[], int size) {
        int max = arr[0];
        for (int i = 1; i < size; i++) {
            if (arr[i] > max) {
                max = arr[i];
            }
        }
        return max;
    }
};

int main() {
    LargestElement finder;
    int arr[] = {10, 20, 5, 40, 30};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Largest element: " << finder.findLargest(arr, size) << endl;
    return 0;
}