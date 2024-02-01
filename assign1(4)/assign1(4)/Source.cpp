#include <iostream>
// This allows the usage of functions like cout and cin for console I/O
// Optimized Bubble Sort Function
void optimizedBubbleSort(int arr[], int n) {
    //for swapping
    bool swapped;

    // Outer loop for the number of passes
    for (int i = 0; i < n - 1; i++) {
        swapped = false;

        // Inner loop for comparing and swapping elements
        for (int j = 0; j < n - i - 1; j++) {
            // Compare adjacent elements and swap if they are in the wrong order
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        // If no swaps occurred in this pass, the array is already sorted
        if (!swapped)
            break;
    }
}

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Given partially sorted array
    int arr[] = { 1, 2, 3, 4, 5, 10, 9, 8, 7, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);

    // Display the unsorted array
    std::cout << "Unsorted array: ";
    printArray(arr, n);

    // Call the optimizedBubbleSort function to sort the array
    optimizedBubbleSort(arr, n);

    // Display the sorted array
    std::cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
