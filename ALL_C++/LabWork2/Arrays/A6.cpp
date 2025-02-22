#include <iostream>
#include <set>
using namespace std;

class DuplicateRemover {
public:
    void removeDuplicates(int arr[], int size) {
        set<int> uniqueElements;
        for (int i = 0; i < size; i++) {
            uniqueElements.insert(arr[i]);
        }

        cout << "Array without duplicates: ";
        for (int num : uniqueElements) {
            cout << num << " ";
        }
        cout << endl;
    }
};

int main() {
    DuplicateRemover remover;
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    remover.removeDuplicates(arr, size);

    return 0;
}