# Topological Sort using Adjacent List Implementation in C++

This project implements the Topological Sort algorithm on a directed acyclic graph (DAG) using an adjacency list in C++. Topological Sort is a linear ordering of vertices such that for every directed edge `uv` from vertex `u` to vertex `v`, `u` comes before `v` in the ordering.

## Table of Contents

- [Features](#features)
- [Requirements](#requirements)
- [Getting Started](#getting-started)
- [Time Complexity](#time-complexity)
- [Usage](#usage)
- [Functions](#functions)
- [Author](#author)

## Features

- Implementation of Topological Sort on a DAG using an adjacency list in C++
- Efficiently orders vertices using Depth First Search (DFS)
- Handles any DAG and provides a valid topological order

## Requirements

- C++ compiler such as GCC or Clang

## Getting Started

1. Clone this repository to your local machine:
    ```shell
    git clone <repository-url>
    ```
2. Change to the project directory:
    ```shell
    cd topological-sort-adj-list
    ```
3. Compile the source code using a C++ compiler:
    ```shell
    g++ -o topological_sort main.cpp
    ```

## Time Complexity

The time complexity of Topological Sort using an adjacency list is **O(V + E)**, where `V` is the number of vertices and `E` is the number of edges in the graph.

## Usage

- The program demonstrates Topological Sort on a sample graph.
- Modify the graph structure in the code to test different scenarios as desired.

## Functions

The Topological Sort implementation contains the following key functions:

- `addEdge`: Adds a directed edge from vertex `u` to vertex `v`.
- `topologicalSortUtil`: Recursively performs DFS to order vertices.
- `topologicalSort`: Initiates the topological sorting process and prints the order.

## Author

- Asjid Ali (asjidale@gmail.com)

Feel free to reach out to me with any questions or issues.
