#include <iostream>
#include <vector>

// Function to perform Gnome Sort
void gnomeSort(std::vector<int>& arr) {
    int index = 0;
    int n = arr.size();
    
    while (index < n) {
        if (index == 0 || arr[index] >= arr[index - 1]) {
            index++;
        } else {
            std::swap(arr[index], arr[index - 1]);
            index--;
        }
    }
}

// Function to print an array
void printArray(const std::vector<int>& arr) {
    for (int i : arr) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> arr = {34, 2, 10, -9, 7, 5, 22, -1};

    std::cout << "Original array: ";
    printArray(arr);

    gnomeSort(arr);

    std::cout << "Sorted array: ";
    printArray(arr);

    return 0;
}
