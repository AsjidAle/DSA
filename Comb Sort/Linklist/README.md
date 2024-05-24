# Combo Sort Implementation in C++

This code demonstrates the implementation of Combo sort in C++ for a singly linked list. Combo sort is an efficient comparison-based sorting algorithm that improves upon bubble sort by using a gap sequence to sort elements, which reduces the number of comparisons and swaps required. Here's a breakdown of the code:

## Table of Contents

- [Features](#features)
- [Requirements](#requirements)
- [Getting Started](#getting-started)
- [Time Complexity and Space](#time-complexity-and-space)
- [Usage](#usage)
- [Functions](#functions)
- [Author](#author)

## Features

- Efficiently sorts a singly linked list using combo sort.
- Demonstrates the combo sort algorithm step by step.
- Displays the original and sorted list elements.

## Requirements

- C++ compiler such as GCC or Clang

## Getting Started

1. Clone this repository to your local machine:
    ```shell
    git clone https://github.com/your-repo/combo-sort-linked-list.git
    ```

2. Change to the project directory:
    ```shell
    cd combo-sort-linked-list
    ```

3. Compile the source code using a C++ compiler:
    ```shell
    g++ -o combo_sort main.cpp
    ```

## Time Complexity and Space

**Time Complexity**: The time complexity of Combo sort is difficult to pinpoint exactly, but it generally performs better than bubble sort. The average and worst-case time complexities are often closer to `O(n log n)` to `O(n^2)` depending on the gap sequence used.

**Space Complexity**: The space complexity of the algorithm is `O(1)`, as it only requires a constant amount of extra space for variables.

## Usage

- The program initializes a linked list with unsorted elements.
- It displays the original list elements.
- The `comboSort` function sorts the list elements using the combo sort algorithm.
- It displays the sorted list elements.

## Functions

The implementation contains the following key functions:

- `comboSort`: Implements the Combo sort algorithm to sort a singly linked list.

## Author

- Asjid Ali (asjidale@gmail.com)

Feel free to reach out to me with any questions or issues.
