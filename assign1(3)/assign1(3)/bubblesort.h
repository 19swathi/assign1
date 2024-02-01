//The iostream header is included to enable standard input / output operations
#include <iostream>

// Bubble Sort Function
void bubbleSort(int arr[], int n) {
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
    // Given unsorted array
    int arr[] = { 2, 8, 1, 6, 3 };
    int n = sizeof(arr) / sizeof(arr[0]);

    // Display the unsorted array
    std::cout << "Unsorted array: ";
    printArray(arr, n);

    // Call the bubbleSort function to sort the array
    bubbleSort(arr, n);

    // Display the sorted array
    std::cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
