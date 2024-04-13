# Merge Sort on Linked List Implementation in C++

This project implements the Merge Sort algorithm on a linked list in C++. Merge Sort is a divide-and-conquer sorting algorithm that divides a linked list into smaller sublists, sorts them, and then merges them back together. This algorithm is efficient and stable, making it suitable for sorting linked lists.



## Table of Contents

- [Features](#features)
- [Requirements](#requirements)
- [Getting Started](#getting-started)
- [Time Complexity](#time-complexity)
- [Usage](#usage)
- [Functions](#functions)
- [Author](#author)

## Features


- Implementation of Merge Sort on a linked list in C++
- Efficiently sorts a linked list using a divide-and-conquer approach
- Merges sorted sublists back together to produce the final sorted list


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

<b>Merge Sort: O(n log n)</b> for sorting a linked list of size n. The algorithm divides the list recursively and sorts smaller sublists, then merges them back together.

<b>Space Complexity: O(log n)</b>
The space complexity of Merge Sort on a linked list is O(log n) due to the recursion stack depth. Unlike array-based Merge Sort, there is no need for auxiliary arrays since the merging process can be performed in-place on the linked list.

## Usage

- The program prompts the user to input the number of elements and the elements themselves.
- It then sorts the provided linked list using Merge Sort and displays the sorted list.
- Modify the input elements in the program to test different scenarios as desired.

## Functions

The Merge Sort implementation on a linked list contains the following key functions:

- `merge`: Merges two sorted sublists (left and right) into a single sorted list.
- `merge_sort`: Recursively divides the linked list into smaller sublists, sorts them, and merges them back together.

## Author

- Asjid Ali (asjidale@gmail.com)

Feel free to reach out to me with any questions or issues.
