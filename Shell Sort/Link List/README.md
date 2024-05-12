# Shell Sort Implementation for Linked List in C++

This project demonstrates the implementation of shell sort for a linked list in C++. It rearranges the elements of a linked list at intervals and sorts them in ascending order.

## Table of Contents

- [Features](#features)
- [Requirements](#requirements)
- [Getting Started](#getting-started)
- [Time Complexity](#time-complexity)
- [Space Complexity](#space-complexity)
- [Usage](#usage)
- [Functions](#functions)
- [Author](#author)

## Features

- Sorts elements of a linked list using shell sort.
- Demonstrates the shell sort algorithm for linked lists.
- Displays the original and sorted linked list elements.

## Requirements

- C++ compiler such as GCC or Clang

## Getting Started

1. Copy the provided code into a C++ source file (e.g., `shell_sort_linked_list.cpp`).

2. Compile the source code using a C++ compiler:

    ```shell
    g++ -o shell_sort_linked_list shell_sort_linked_list.cpp
    ```

3. Run the compiled executable:

    ```shell
    ./shell_sort_linked_list
    ```

## Time Complexity

- The time complexity of shell sort on a linked list is not straightforward to determine due to the irregular access pattern.
- However, it generally performs better than insertion sort and bubble sort.

## Space Complexity

- The space complexity of the algorithm is O(1), as it only requires a constant amount of extra space for variables.

## Usage

- The program initializes a linked list with unsorted elements.
- It displays the original linked list elements.
- The shellSort function sorts the linked list elements using the shell sort algorithm.
- It displays the sorted linked list elements.

## Functions

The code contains the following key functions:

- `createNode`: Creates a new node for the linked list.
- `insert`: Inserts a node at the end of the linked list.
- `printList`: Prints the elements of the linked list.
- `shellSort`: Implements shell sort on the linked list.

## Author

- [Asjid Ali](mailto:asjidale@gmail.com)

Feel free to reach out for any questions or suggestions.
