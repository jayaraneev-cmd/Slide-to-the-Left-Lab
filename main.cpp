#include <iostream>
#include "src/slide.hpp"

using namespace std;

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};

    arrayShift(arr, 5, 1);
    printArray(arr, 5); // 2 3 4 5 1

    arrayShift(arr, 5, 3);
    printArray(arr, 5); // 5 1 2 3 4

    return 0;
}