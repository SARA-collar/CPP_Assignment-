/*Recursion concepts
1. Write a C++ program to find the sum of all elements in an array using recursion*/

#include <iostream>
using namespace std;

class ArraySum {
public:
    
    int sum(int arr[], int size) {
        // Base case: if the size is 0, return 0
        if (size == 0) {
            return 0;
        } else {
            
            return arr[size - 1] + sum(arr, size - 1);
        }
    }
};

int main() {
    ArraySum arraySum;
    int arr[] = {1, 2, 3, 4, 5}; 
    int size = sizeof(arr) / sizeof(arr[0]); 
    int result = arraySum.sum(arr, size);
    cout << "The sum of all elements in the array is: " << result << endl;

    return 0;
}