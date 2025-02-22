/*1. Find sum of all elements in an array.
2. Find largest element in an array.
3. Check existence of a number in an array.
4. Print the elements of an array in reverse order
5. Find the missing number in a sorted array.
6. Remove duplicates from an array*/

#include <iostream>
using namespace std;

class ArraySum {
public:
    int findSum(int arr[], int size) {
        int sum = 0;
        for (int i = 0; i < size; i++) {
            sum += arr[i];
        }
        return sum;
    }
};

int main() {
    ArraySum calculator;
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Sum of elements: " << calculator.findSum(arr, size) << endl;
    return 0;
}
