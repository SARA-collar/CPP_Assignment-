/*5. Write a C++ program that prints the three highest numbers from a list of numbers in
descending order.*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class TopThreeNumbers {
private:
    vector<int> numbers;

public:
    TopThreeNumbers(vector<int> nums) {
        numbers = nums;
    }

    void displayTopThree() {
        sort(numbers.rbegin(), numbers.rend());
        cout << "Top three numbers: ";
        for (int i = 0; i < 3 && i < numbers.size(); i++) {
            cout << numbers[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    vector<int> nums = {12, 56, 78, 34, 90, 23};
    TopThreeNumbers obj(nums);
    obj.displayTopThree();

    return 0;
}