# Prim's Minimum Spanning Tree (MST) Implementation in C++

This code demonstrates the implementation of Prim's algorithm to find the Minimum Spanning Tree (MST) of a graph represented using an adjacency matrix. Prim's algorithm is a greedy algorithm that finds a minimum spanning tree for a weighted undirected graph. Here's a breakdown of the code:

## Table of Contents

- [Features](#features)
- [Requirements](#requirements)
- [Getting Started](#getting-started)
- [Time Complexity and Space](#time-complexity-and-space)
- [Usage](#usage)
- [Functions](#functions)
- [Author](#author)

## Features

- Implements Prim's algorithm to find the MST of a graph.
- Uses an adjacency matrix to represent the graph.
- Finds the MST for a graph with 5 vertices and prints the edges and their weights.

## Requirements

- C++ compiler such as GCC or Clang.

## Getting Started

1. Clone this repository to your local machine:
    ```shell
    git clone https://github.com/your-repo/prim-mst.git
    ```

2. Change to the project directory:
    ```shell
    cd prim-mst
    ```

3. Compile the source code using a C++ compiler:
    ```shell
    g++ -o primMST main.cpp
    ```

4. Run the compiled program:
    ```shell
    ./primMST
    ```

## Time Complexity and Space

**Time Complexity**: The time complexity of Prim's algorithm is O(V^2), where V is the number of vertices. This is because we perform a linear scan to find the minimum key value for each vertex.

**Space Complexity**: The space complexity is O(V^2) for storing the adjacency matrix of the graph, plus O(V) for the `parent`, `key`, and `mstSet` arrays.

## Usage

- The program initializes a graph with a specified number of vertices using an adjacency matrix.
- It uses Prim's algorithm to construct the MST.
- It prints the edges of the MST and their respective weights.

## Functions

The implementation contains the following key functions:

- `int minKey(int key[], bool mstSet[])`: Finds the vertex with the minimum key value that is not yet included in the MST.
- `void printMST(int parent[], vector<vector<int>>& graph)`: Prints the edges of the MST and their weights.
- `void primMST(vector<vector<int>>& graph)`: Constructs and prints the MST for the given graph using Prim's algorithm.
- `int main()`: Initializes a sample graph and calls `primMST` to print the MST.

## Author

- Moizna Zaheer <a href=https://github.com/Moizna-Zaheer>Moizna Zaheer</a>

Feel free to reach out to me with any questions or issues.
