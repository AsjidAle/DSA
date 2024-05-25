# Traveling Salesman Problem (TSP) Implementation in C++

This code demonstrates the implementation of the Traveling Salesman Problem (TSP) using Dynamic Programming in C++. The TSP is a well-known combinatorial optimization problem that aims to find the shortest possible route that visits a set of cities exactly once and returns to the starting city. Here's a breakdown of the code:

## Table of Contents

- [Features](#features)
- [Requirements](#requirements)
- [Getting Started](#getting-started)
- [Time Complexity and Space](#time-complexity-and-space)
- [Usage](#usage)
- [Functions](#functions)
- [Author](#author)

## Features

- Solves the Traveling Salesman Problem using Dynamic Programming.
- Finds the minimum cost to visit all cities and return to the starting city.
- Reconstructs and displays the optimal route.

## Requirements

- C++ compiler such as GCC or Clang

## Getting Started

1. Clone this repository to your local machine:
    ```shell
    git clone https://github.com/your-repo/tsp-dynamic-programming.git
    ```

2. Change to the project directory:
    ```shell
    cd tsp-dynamic-programming
    ```

3. Compile the source code using a C++ compiler:
    ```shell
    g++ -o tsp main.cpp
    ```

4. Run the compiled program:
    ```shell
    ./tsp
    ```

## Time Complexity and Space

**Time Complexity**: The time complexity of this implementation is `O(n^2 * 2^n)`, where `n` is the number of cities. This is due to the fact that we are considering all subsets of cities and for each subset, we are checking all possible cities to find the minimum cost.

**Space Complexity**: The space complexity is `O(n * 2^n)`, as we are storing the minimum cost for each subset of cities in a DP table.

## Usage

- The program initializes a distance matrix representing the distances between each pair of cities.
- It displays the minimum cost to visit all cities and return to the starting city.
- It also reconstructs and displays the best route to achieve this minimum cost.

## Functions

The implementation contains the following key functions:

- `tspDynamicProgramming`: Solves the TSP using Dynamic Programming and returns the minimum cost.
- `main`: Initializes the distance matrix, calls the TSP function, and prints the results.

## Author

- Moiozna Zaheer

Feel free to reach out to me with any questions or issues.
