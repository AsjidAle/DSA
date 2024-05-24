# Gnome Sort Implementation in C++

This code demonstrates the implementation of Gnome Sort in C++ for a singly linked list. Gnome Sort is a simple sorting algorithm similar to insertion sort but moves elements to their correct positions through a series of swaps. Here's a breakdown of the code:

## Table of Contents

- [Features](#features)
- [Requirements](#requirements)
- [Getting Started](#getting-started)
- [Time Complexity and Space](#time-complexity-and-space)
- [Usage](#usage)
- [Functions](#functions)
- [Author](#author)

## Features

- Efficiently sorts a singly linked list using Gnome Sort.
- Demonstrates the Gnome Sort algorithm step by step.
- Displays the original and sorted list elements.

## Requirements

- C++ compiler such as GCC or Clang

## Getting Started

1. Clone this repository to your local machine:
    ```shell
    git clone https://github.com/your-repo/gnome-sort-linked-list.git
    ```

2. Change to the project directory:
    ```shell
    cd gnome-sort-linked-list
    ```

3. Compile the source code using a C++ compiler:
    ```shell
    g++ -o gnome_sort main.cpp
    ```

## Time Complexity and Space

**Time Complexity**: The time complexity of Gnome Sort is `O(n^2)` in the worst case. However, it can perform well on nearly sorted data, with an average complexity closer to `O(n)`.

**Space Complexity**: The space complexity of the algorithm is `O(1)`, as it only requires a constant amount of extra space for variables.

## Usage

- The program initializes a linked list with unsorted elements.
- It displays the original list elements.
- The `gnomeSort` function sorts the list elements using the Gnome Sort algorithm.
- It displays the sorted list elements.

## Functions

The implementation contains the following key functions:

- `gnomeSort`: Implements the Gnome Sort algorithm to sort a singly linked list.
- `append`: Adds a new node with the given data to the end of the list.
- `printList`: Prints all elements of the linked list.

## Author

- Asjid Ali (asjidale@gmail.com)

Feel free to reach out to me with any questions or issues.
