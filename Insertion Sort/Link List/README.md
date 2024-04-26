# Insertion Sort on Linked List Implementation in C++

This project implements the Insertion Sort algorithm on a linked list in C++. Insertion Sort is a simple and efficient sorting algorithm that builds the sorted list one element at a time by iteratively inserting each element into its correct position in the sorted portion of the list.



## Table of Contents

- [Features](#features)
- [Requirements](#requirements)
- [Getting Started](#getting-started)
- [Time Complexity](#time-complexity)
- [Usage](#usage)
- [Functions](#functions)
- [Author](#author)

## Features


- Implementation of Insertion Sort on a linked list in C++
- Efficiently sorts a linked list in place
- Utilizes the insertion method to build the sorted list incrementally


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

<b>Insertion Sort:</b> The average and worst-case time complexity of Insertion Sort on a linked list is `O(n^2)`, where `n` is the number of nodes in the linked list. The best-case time complexity is `O(n)` when the list is already sorted

<b>Space Complexity: O(1)</b>
Insertion Sort on a linked list sorts the list in place without requiring additional data structures. Therefore, the space complexity is O(1).




## Usage

- The program initializes a linked list with a predefined set of integers.
- It sorts the linked list using the Insertion Sort algorithm and then displays the sorted list.
- Modify the input data in the program to test different scenarios as desired

## Functions

The Insertion Sort implementation on a linked list contains the following key functions:

- `push:` Inserts a new node with the given value at the beginning of the linked list.
- `insertionSort:` Implements the Insertion Sort algorithm on the linked list, iteratively inserting each node into its correct position in the sorted portion of the list.
- `sortedInsert:` Inserts a new node into the sorted portion of the linked list while maintaining the sorted order.
- `printlist:` Prints the elements of the linked list.


  
## Author

- Asjid Ali (asjidale@gmail.com)

Feel free to reach out to me with any questions or issues.
