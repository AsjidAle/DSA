# Counting Sort Implementation in C++


This project implements the Counting Sort algorithm in C++. Counting Sort is an efficient sorting algorithm that works well for sorting integers with a limited range. It counts the occurrences of each element in the input array and uses this information to place each element in its correct sorted position.



## Table of Contents

- [Features](#features)
- [Requirements](#requirements)
- [Getting Started](#getting-started)
- [Time Complexity](#time-complexity)
- [Usage](#usage)
- [Functions](#functions)
- [Author](#author)

## Features


- Implementation of Counting Sort in C++
- Efficient sorting algorithm suitable for integers with a limited range
- Utilizes counting and cumulative counting to sort the input array



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

<b>Counting Sort:</b> The time complexity of Counting Sort is `O(n + k)`, where `n` is the number of elements in the input array and `k` is the range of the input (the difference between the maximum and minimum element).


<b>Space Complexity: `O(n + k)`</b>
Counting Sort requires additional space proportional to the size of the input array `n` plus the range of the input `k`.


## Usage

- The program initializes an array with a predefined set of integers.
- It sorts the array using the Counting Sort algorithm and then displays the sorted array.
- Modify the input data in the program to test different scenarios as desired.

## Functions

The Counting Sort implementation contains the following key functions:

- `countSort`: Implements the Counting Sort algorithm, counting the occurrences of each element in the input array and using this information to build the sorted array.
display: Displays the elements of an array.

  
## Author

- Asjid Ali (asjidale@gmail.com)

Feel free to reach out to me with any questions or issues.
