# Depth First Search (DFS) Implementation in C++

This code demonstrates the implementation of Depth First Search (DFS) for a graph in C++. The DFS algorithm is used to traverse or search through graph data structures. Here's a breakdown of the code:

## Table of Contents

- [Features](#features)
- [Requirements](#requirements)
- [Getting Started](#getting-started)
- [Time Complexity and Space](#time-complexity-and-space)
- [Usage](#usage)
- [Functions](#functions)
- [Author](#author)

## Features

- Implements Depth First Search (DFS) for a graph.
- Uses an adjacency list for efficient graph representation.
- Traverses the graph starting from a specified vertex.

## Requirements

- C++ compiler such as GCC or Clang.

## Getting Started

1. Clone this repository to your local machine:
    ```shell
    git clone https://github.com/your-repo/dfs-graph.git
    ```

2. Change to the project directory:
    ```shell
    cd dfs-graph
    ```

3. Compile the source code using a C++ compiler:
    ```shell
    g++ -o dfs main.cpp
    ```

4. Run the compiled program:
    ```shell
    ./dfs
    ```

## Time Complexity and Space

**Time Complexity**: The time complexity of DFS is O(V + E), where V is the number of vertices and E is the number of edges in the graph. Each vertex and edge is processed once.

**Space Complexity**: The space complexity is O(V), where V is the number of vertices. This is due to the stack used for the traversal and the visited array.

## Usage

- The program initializes a graph with a specified number of vertices.
- It adds edges to the graph using the `addEdge` function.
- It performs DFS starting from a specified vertex and prints the vertices in the order they are visited.

## Functions

The implementation contains the following key functions:

- `Graph(int V)`: Constructor to initialize the graph with `V` vertices.
- `void addEdge(int v, int w)`: Adds a directed edge from vertex `v` to vertex `w`.
- `void DFS(int start) const`: Performs DFS starting from the vertex `start` and prints the traversal order.

## Author

- Moizna Zaheer

Feel free to reach out to me with any questions or issues.
