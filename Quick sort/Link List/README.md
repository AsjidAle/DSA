# Quick Sort on Linked List Implementation in C++

This project implements the Quick Sort algorithm on a linked list in C++. Quick Sort is an efficient sorting algorithm based on the divide-and-conquer approach. It partitions the linked list into smaller sublists based on a pivot element, then recursively sorts and merges the sublists.



## Table of Contents

- [Features](#features)
- [Requirements](#requirements)
- [Getting Started](#getting-started)
- [Time Complexity](#time-complexity)
- [Usage](#usage)
- [Functions](#functions)
- [Author](#author)

## Features


- Implementation of Quick Sort on a linked list in C++
- Efficiently sorts a linked list using a divide-and-conquer approach
- Allows for sorting the linked list in place using partitioning and recursion.

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

<b>Quick Sort:</b> The average and <i>best-case</i> time complexity of Quick Sort on a linked list is <b>O(n log n)</b>, where n is the size of the linked list. However, the <i>worst-case</i> time complexity can be <b>O(n^2)</b> depending on the pivot selection strategy.


<b>Space complexity</b> The space complexity of Quick Sort on a linked list is <b>O(log n)</b> due to the recursion stack depth. The algorithm sorts the linked list in place and does not require additional data structures.

## Usage

- The program initializes a linked list with the provided data.
- It then sorts the linked list using Quick Sort and displays the sorted list.
- Modify the data in the program to test different scenarios as desired.

## Functions

The Quick Sort implementation on a linked list contains the following key functions:

- `push`: Inserts a node at the beginning of the linked list.
- `printList`: Prints the elements of the linked list.
- `partition`: Partitions the linked list based on a pivot element, separating nodes less than the pivot from nodes greater than or equal to the pivot.
- `quickSortRecur`: Recursively sorts the linked list using Quick Sort.
- `quickSort`: Wrapper function that initiates the Quick Sort algorithm.


## Author

- Asjid Ali (asjidale@gmail.com)

Feel free to reach out to me with any questions or issues.
