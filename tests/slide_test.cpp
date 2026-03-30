#include <iostream>
#include "../src/slide.hpp"

using namespace std;

int main() {
    struct Test {
        int arr[5];
        int size;
        int shifts;
        int expected[5];
    };

    Test tests[] = {
        {{1, 2, 3, 4, 5}, 5, 1, {2, 3, 4, 5, 1}},
        {{1, 2, 3, 4, 5}, 5, 3, {4, 5, 1, 2, 3}},
        {{1, 2, 3}, 3, 3, {1, 2, 3}},
        {{1, 2, 3}, 3, 4, {2, 3, 1}},
        {{10, 20, 30}, 3, 0, {10, 20, 30}}
    };

    for (int t = 0; t < 5; t++) {
        Test test = tests[t];

        // make a copy to rotate
        int arrCopy[5];
        for (int i = 0; i < test.size; i++) arrCopy[i] = test.arr[i];

        arrayShift(arrCopy, test.size, test.shifts);

        bool passed = true;
        for (int i = 0; i < test.size; i++)
            if (arrCopy[i] != test.expected[i]) passed = false;

        cout << "Test " << t+1 << ": " << (passed ? "PASSED" : "FAILED") << endl;
    }

    return 0;
}