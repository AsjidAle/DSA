# Merge Sort on Array Implementation in C++


<p>This project implements the Merge Sort algorithm on an array in C++. Merge Sort is a divide-and-conquer
 sorting algorithm that divides an array into smaller subarrays, sorts them, and then merges them back 
 together. This algorithm is efficient and stable, making it suitable for a variety of applications.</p>


## Table of Contents

- [Features](#features)
- [Requirements](#requirements)
- [Getting Started](#getting-started)
- [Time Complexity](#time-complexity)
- [Usage](#usage)
- [Functions](#functions)
- [Author](#author)

## Features


- Implementation of Merge Sort on an array in C++
- Efficiently sorts an array using a divide-and-conquer approach
- Merges sorted subarrays back together to produce the final sorted array

## Requirements

- C++ compiler such as GCC or Clang

## Getting Started

1. Clone this repository to your local machine:
    

2. Change to the project directory:
    ```shell
    cd b-tree-cpp
    ```
3. Compile the source code using a C++ compiler:
  

## Time Complexity and Space

<b>Merge Sort: O(n log n)</b> for sorting an array of size n. The algorithm divides the array recursively and sorts smaller subarrays, then merges them back together.

<b>Space Complexity: O(n)</b> Merge Sort has a space complexity of O(n) because it requires additional memory to temporarily store the merged subarrays. During the merge step, auxiliary arrays are used to hold the elements from the subarrays being merged. This additional memory is proportional to the size of the array, making the space complexity O(n).








## Usage

- The program prompts the user to input the number of elements and the elements themselves.
- It then sorts the provided array using Merge Sort and displays the sorted array.
- Modify the input elements in the program to test different scenarios as desired.


## Functions

The Merge Sort implementation contains the following key functions:

- `merge`: Merges two sorted subarrays (left and right) into a single sorted array.
- `merge_sort`: Recursively divides the array into smaller subarrays, sorts them, and merges them back together.
  
## Author

- Asjid Ali (asjidale@gmail.com)

Feel free to reach out to me with any questions or issues.
