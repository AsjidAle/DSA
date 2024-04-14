# Quick Sort Implementation in C++

This project implements the Quick Sort algorithm on an array in C++. Quick Sort is a highly efficient sorting algorithm based on the divide-and-conquer approach. It partitions the array into smaller subarrays based on a pivot element, and then recursively sorts the subarrays.


## Table of Contents

- [Features](#features)
- [Requirements](#requirements)
- [Getting Started](#getting-started)
- [Time Complexity](#time-complexity)
- [Usage](#usage)
- [Functions](#functions)
- [Author](#author)

## Features


- Implementation of Quick Sort on an array in C++
- Efficiently sorts an array using a divide-and-conquer approach
- Allows for customization of the pivot selection strategy (e.g., first, last, or median element).

## Requirements

- C++ compiler such as GCC or Clang

## Getting Started

1. Clone this repository to your local machine:
    

2. Change to the project directory:
    ```shell
    cd main-cpp
    ```
3. Compile the source code using a C++ compiler:
  

## Time Complexity and Space

<b>Quick Sort:</b> The average and best-case time complexity of Quick Sort is <b>O(n log n)</b>, where n is the size of the array. However, the worst-case time complexity is O(n^2) if the pivot selection strategy is not optimal.

<b>Space complexity</b> of Quick Sort on an array is <b>O(log n)</b> due to the recursion stack depth. This assumes the array is sorted in place and the algorithm is implemented with tail-call optimization to minimize the stack usage.

## Usage

- The program prompts the user to input the number of elements and the elements themselves.
- It then sorts the provided array using Quick Sort and displays the sorted array.
- Modify the input elements in the program to test different scenarios as desired.


## Functions

The Quick Sort implementation contains the following key functions:

- `partition`: Partitions the array into two sections around a pivot element. Elements less than the pivot go to the left, while elements greater than the pivot go to the right.
- `quick_sort`: Recursively sorts the array by partitioning it around a pivot and sorting the subarrays.


## Author

- Asjid Ali (asjidale@gmail.com)

Feel free to reach out to me with any questions or issues.
