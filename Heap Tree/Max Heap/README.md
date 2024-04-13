# Max Heap Implementation in C++

This project implements a Max Heap data structure in C++. A Max Heap is a binary tree-based data structure where each node is smaller than its parent. It is useful for various priority queue operations and sorting algorithms.


## Table of Contents

- [Features](#features)
- [Requirements](#requirements)
- [Getting Started](#getting-started)
- [Time Complexity](#time-complexity)
- [Usage](#usage)
- [Functions](#functions)
- [Author](#author)

## Features


- Implementation of a Max Heap data structure in C++
- Supports efficient construction and maintenance of a Max Heap
- Provides a build_Maxheap function to convert an array into a Max Heap
- Offers Max_heapify to maintain the heap property in a subtree

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

<b>Max Heapify: O(log n)</b> for each operation, where n is the size of the heap. This function maintains the heap property for a subtree.
<b>Build Max Heap: O(n)</b> to construct a Max Heap from an unsorted array of size n.


## Usage

- The program prompts the user to input the number of elements and the elements themselves.
- It builds a Max Heap from the provided array and displays the heapified array.
- Modify the input elements in the program to test different scenarios as desired.

## Functions

The Max Heap implementation contains the following key functions:

- `Max_heapify`: This function maintains the Max Heap property for a subtree rooted at index i in an array a of size n.
- `build_Maxheap`: This function constructs a Max Heap from an unsorted array a of size n.
  
## Author

- Asjid Ali (asjidale@gmail.com)

Feel free to reach out to me with any questions or issues.
