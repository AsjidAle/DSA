# Block Sort Algorithm


This project demonstrates the Block Sort algorithm implemented in C++. The Block Sort algorithm divides the input array into blocks of a specified size, sorts each block individually, and then merges the sorted blocks into a single sorted list. 

The Block Sort algorithm is a sorting algorithm that divides the input array into blocks of a specified size, sorts each block individually using any sorting algorithm (in this implementation, the blocks are sorted using the built-in std::sort function), and then merges the sorted blocks into a single sorted list.




## Table of Contents

- [Features](#features)
- [Requirements](#requirements)
- [Getting Started](#getting-started)
- [Time Complexity](#time-complexity)
- [Usage](#usage)
- [Functions](#functions)
- [Author](#author)

## Features


- Sorts an array using the Block Sort algorithm.
- Allows specifying the size of blocks for sorting.


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

<b>Time Complexity</b>:  The time complexity of the Block Sort algorithm depends on the block size and the sorting algorithm used to sort the blocks. In the worst-case scenario, it can be `O(n^2)`, but typically it performs better than quadratic time complexity.

<b>Space Complexity</b>: The space complexity of the Block Sort algorithm is `O(n)`, where `n` is the size of the input array.



## Usage

- The program prompts the user to enter the input array.
- It allows specifying the block size for sorting.
- It sorts the input array using the Block Sort algorithm.
- It displays the sorted array.

## Functions

The program contains the following key functions:

- `blockSort`: Sorts the input array using the Block Sort algorithm.
- `main`: Entry point of the program.

  
## Author

- Asjid Ali (asjidale@gmail.com)

Feel free to reach out to me with any questions or issues.
