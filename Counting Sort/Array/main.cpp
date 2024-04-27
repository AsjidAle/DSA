#include <iostream>
using namespace std;

// Function to perform counting sort
void countSort(int arr[], int n) {
    // Find the maximum element in the array
    int max_element = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max_element)
            max_element = arr[i];
    }

    // Initialize count_arr with zeros
    int count_arr[max_element + 1] = {0};

    // Count the occurrences of each element in the input array
    for (int i = 0; i < n; i++) {
        count_arr[arr[i]]++;
    }

    // Modify count_arr to store the cumulative count of elements
    for (int i = 1; i <= max_element; i++) {
        count_arr[i] += count_arr[i - 1];
    }

    // Create a temporary array to store sorted elements
    int arr1[n];

    // Build the sorted array by iterating through the input array in reverse order
    for (int i = n - 1; i >= 0; i--) {
        arr1[count_arr[arr[i]] - 1] = arr[i];
        count_arr[arr[i]]--;
    }

    // Copy the sorted elements back to the original array
    for (int i = 0; i < n; i++) {
        arr[i] = arr1[i];
    }
}

// Function to display the elements of an array
void display(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}





int main() {
    int arr[] = {4, 2, 2, 8, 3, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    // Perform counting sort
    countSort(arr, n);
    
    // Display the sorted array
    display(arr, n);
    return 0;
}
