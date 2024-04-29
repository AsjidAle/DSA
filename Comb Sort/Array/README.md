# Comb Sort Implementation in C++


This code demonstrates the implementation of comb sort in C++. Comb sort is a comparison-based sorting algorithm that improves upon bubble sort by eliminating small values at the end of the list efficiently. Here's a breakdown of the code:


## Table of Contents

- [Features](#features)
- [Requirements](#requirements)
- [Getting Started](#getting-started)
- [Time Complexity](#time-complexity)
- [Usage](#usage)
- [Functions](#functions)
- [Author](#author)

## Features


- Efficiently sorts an array of integers using comb sort.
- Demonstrates the comb sort algorithm step by step.
- Displays the original and sorted array elements.


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

<b>Time Complexity</b>: The time complexity of comb sort is `O(n^2)` in the worst-case scenario.
However, its average-case time complexity is better than bubble sort at `O(n^2/2^p)`, where p is the number of increments.



<b>Space Complexity: </b>
The space complexity of the algorithm is `O(1)`, as it only requires a constant amount of extra space for variables.



## Usage

- The program initializes an array with unsorted elements.
- It displays the original array elements.
- The combSort function sorts the array elements using the comb sort algorithm.
- It displays the sorted array elements.

## Functions

The implementation contains the following key functions:

- `updatedGap`: Calculates the updated gap value for comb sort.
- `combSort`: Performs comb sort on an array of integers.
- `printArr`: Prints the elements of an array.

  
## Author

- Asjid Ali (asjidale@gmail.com)

Feel free to reach out to me with any questions or issues.
