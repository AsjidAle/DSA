# Insertion Sort Implementation in C++

This project implements the Insertion Sort algorithm on an array (using a vector) in C++. Insertion Sort is a simple and intuitive sorting algorithm that builds a sorted array one element at a time. It works by iterating through the array and inserting each element in the correct position in the sorted portion of the array.



## Table of Contents

- [Features](#features)
- [Requirements](#requirements)
- [Getting Started](#getting-started)
- [Time Complexity](#time-complexity)
- [Usage](#usage)
- [Functions](#functions)
- [Author](#author)

## Features


- Implementation of Insertion Sort on a vector of integers in C++
- Simple sorting algorithm suitable for small datasets
- Efficiently sorts an array in place


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

<b>Insertion Sort:</b> The average and <b>worst-case time complexity</b> of Insertion Sort is <b>O(n^2),</b> where n is the size of the array. The <b>best-case</b> time complexity is <b>O(n)</b> when the array is already sorted.

<b>Space Complexity: O(1)</b>
Insertion Sort sorts the vector in place without requiring additional data structures. Therefore, the space complexity is O(1).


## Usage

- The program initializes a vector with a predefined set of integers.
- It sorts the vector using the Insertion Sort algorithm and then displays the sorted vector.
- Modify the data in the program to test different scenarios as desired.

## Functions

The Insertion Sort implementation on a `vector` of integers contains the following key function:


- `insertionSort`: Implements the Insertion Sort algorithm on a vector of integers, iterating through the array and inserting each element in its correct position in the sorted portion of the array.

  
## Author

- Asjid Ali (asjidale@gmail.com)

Feel free to reach out to me with any questions or issues.
