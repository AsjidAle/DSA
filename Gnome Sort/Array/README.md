# Gnome Sort Implementation in C++

This code demonstrates the implementation of Gnome sort in C++. Gnome sort is a simple comparison-based sorting algorithm, similar to insertion sort but with a different approach to finding the correct position of an element. Here's a breakdown of the code:

## Table of Contents

- [Features](#features)
- [Requirements](#requirements)
- [Getting Started](#getting-started)
- [Time Complexity and Space](#time-complexity-and-space)
- [Usage](#usage)
- [Functions](#functions)
- [Author](#author)

## Features

- Efficiently sorts an array of integers using Gnome sort.
- Demonstrates the Gnome sort algorithm step by step.
- Displays the original and sorted array elements.

## Requirements

- C++ compiler such as GCC or Clang

## Getting Started

1. Clone this repository to your local machine:
    ```shell
    git clone https://github.com/your-repo/gnome-sort.git
    ```

2. Change to the project directory:
    ```shell
    cd gnome-sort
    ```

3. Compile the source code using a C++ compiler:
    ```shell
    g++ -o gnome_sort main.cpp
    ```

## Time Complexity and Space

**Time Complexity**: The average and worst-case time complexities of Gnome sort are `O(n^2)`. However, for nearly sorted data, the time complexity can approach `O(n)`.

**Space Complexity**: The space complexity of the algorithm is `O(1)`, as it only requires a constant amount of extra space for variables.

## Usage

- The program initializes an array with unsorted elements.
- It displays the original array elements.
- The `gnomeSort` function sorts the array elements using the Gnome sort algorithm.
- It displays the sorted array elements.

## Functions

The implementation contains the following key functions:

- `gnomeSort`: Implements the Gnome sort algorithm to sort an array of integers.
- `printArray`: Prints the elements of the array.

## Author

- Asjid Ali (asjidale@gmail.com)

Feel free to reach out to me with any questions or issues.
