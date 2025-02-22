#include <iostream>
#include <vector>
using namespace std;

class VectorHandler {
public:
    void pushAndPrint(vector<int>& vec, int n) {
        for (int i = 1; i <= n; i++) {
            vec.push_back(i);
        }

        for (int num : vec) {
            cout << num << " ";
        }
        cout << endl;
    }
};

int main() {
    VectorHandler handler;
    vector<int> numbers;
    
    handler.pushAndPrint(numbers, 5);

    return 0;
}