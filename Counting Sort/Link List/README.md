# Counting Sort Implementation in C++ on LinkList


This project demonstrates ordering numbers stored in a linked list in C++. It generates a linked list of random numbers and then orders them in ascending order. This program utilizes a linked list data structure to store random numbers and then orders them in ascending order.


## Table of Contents

- [Features](#features)
- [Requirements](#requirements)
- [Getting Started](#getting-started)
- [Time Complexity](#time-complexity)
- [Usage](#usage)
- [Functions](#functions)
- [Author](#author)

## Features


- Generates a linked list of random numbers.
- Orders the numbers in ascending order.
- Displays the original and ordered numbers.


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

<b>Time Complexity</b>: The time complexity of this program is O(n^2) for ordering the numbers in the linked list. This is because it iterates over the list to find the smallest number repeatedly until the list is sorted.



<b>Space Complexity: </b>
The space complexity of this program is O(n) where n is the number of random numbers generated. This is because it creates a linked list to store the numbers.


## Usage

- The program prompts the user to enter the number of random numbers to generate.
- It generates a linked list of random numbers.
- It displays the original list of numbers.
- It orders the numbers in ascending order.
- It displays the ordered list of numbers.

## Functions

The Counting Sort implementation contains the following key functions:

- `get_new_number`: Creates a new number node and adds it to the linked list.
- `show_numbers`: Displays the numbers in the linked list.
- `order_numbers`: Orders the numbers in the linked list in ascending order.

  
## Author

- Asjid Ali (asjidale@gmail.com)

Feel free to reach out to me with any questions or issues.
