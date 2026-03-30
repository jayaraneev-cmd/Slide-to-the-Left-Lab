#include "slide.hpp"

void arrayShift(int arr[], int size, int shifts) {
    // Handle edge cases
    if (size <= 0) return;

    // Normalize shifts (important for cases like 4 shifts on size 3)
    shifts = shifts % size;

    // Perform shift one step at a time
    for (int s = 0; s < shifts; s++) {
        int first = arr[0];  // store first element

        // shift everything left
        for (int i = 0; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }

        arr[size - 1] = first; // move first to end
    }
}