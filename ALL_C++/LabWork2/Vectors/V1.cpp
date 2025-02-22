/*Vectors
1. WAP to modify the second element of an integer vector and print the new output
using a Range-based For Loop.
2. WAP to push elements into an empty vector and print the output.
3. WAP to iterate through a vector of strings.
4. WAP to input an integer vector and print each element multiplied by 2*/
#include <iostream>
#include <vector>
using namespace std;

class VectorModifier {
public:
    void modifyAndPrint(vector<int>& vec) {
        if (vec.size() > 1) {
            vec[1] = 100;  
        }

        for (int num : vec) {
            cout << num << " ";
        }
        cout << endl;
    }
};

int main() {
    VectorModifier modifier;
    vector<int> numbers = {10, 20, 30, 40, 50};

    cout << "Modified vector: ";
    modifier.modifyAndPrint(numbers);

    return 0;
}