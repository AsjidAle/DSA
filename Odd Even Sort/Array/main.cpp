#include <iostream>
using namespace std;

// Function to perform odd-even sort
void oddEvenSort(int arr[], int n) {
    bool sorted = false; // Flag to indicate whether the array is sorted
    while (!sorted) {
        sorted = true; // Assume the array is sorted until proven otherwise
        // Perform the odd-even comparisons
        for (int i = 1; i < n - 1; i += 2) {
            if (arr[i] > arr[i + 1]) {
                swap(arr[i], arr[i + 1]);
                sorted = false; // Set the flag to false if a swap occurs
            }
        }
        for (int i = 0; i < n - 1; i += 2) {
            if (arr[i] > arr[i + 1]) {
                swap(arr[i], arr[i + 1]);
                sorted = false; // Set the flag to false if a swap occurs
            }
        }
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main() {
    int arr[] = {5, 2, 8, 3, 9, 1, 6, 4, 7}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    cout << "Original array: ";
    printArray(arr, n);

    // Perform odd-even sort
    oddEvenSort(arr, n);

    cout << "Array after odd-even sort: ";
    printArray(arr, n);

    return 0;
}
