# Min Heap Implementation in C++

This project implements a Min Heap data structure in C++. A Min Heap is a binary tree-based data structure where each node is smaller than its children. It is useful for various priority queue operations and sorting algorithms.


## Table of Contents

- [Features](#features)
- [Requirements](#requirements)
- [Getting Started](#getting-started)
- [Time Complexity](#time-complexity)
- [Usage](#usage)
- [Functions](#functions)
- [Author](#author)

## Features


- Implementation of a Min Heap data structure in C++
- Supports efficient construction and maintenance of a Min Heap
- Provides a build_minheap function to convert an array into a Min Heap
- Offers min_heapify to maintain the heap property in a subtree

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

<b>Min Heapify: O(log n)</b> for each operation, where n is the size of the heap. This function maintains the heap property for a subtree.
<b>Build Min Heap: O(n)</b> to construct a Min Heap from an unsorted array of size n.


## Usage

- The program prompts the user to input the number of elements and the elements themselves.
- It builds a Min Heap from the provided array and displays the heapified array.
- Modify the input elements in the program to test different scenarios as desired.

## Functions

The Min Heap implementation contains the following key functions:

- `min_heapify`: This function maintains the Min Heap property for a subtree rooted at index i in an array a of size n.
- `build_minheap`: This function constructs a Min Heap from an unsorted array a of size n.
  
## Author

- Asjid Ali (asjidale@gmail.com)

Feel free to reach out to me with any questions or issues.
