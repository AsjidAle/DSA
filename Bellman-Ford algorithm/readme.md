# Bellman-Ford Algorithm Implementation in C++

This code demonstrates the implementation of the Bellman-Ford algorithm for finding the shortest paths from a single source vertex to all other vertices in a weighted graph. The algorithm can handle graphs with negative weights.

## Table of Contents
- [Features](#features)
- [Requirements](#requirements)
- [Getting Started](#getting-started)
- [Time Complexity and Space Complexity](#time-complexity-and-space-complexity)
- [Usage](#usage)
- [Functions](#functions)
- [Author](#author)

## Features
- Implements the Bellman-Ford algorithm for a weighted graph.
- Detects negative weight cycles in the graph.
- Uses an adjacency list for efficient graph representation.

## Requirements
- C++ compilers such as GCC or Clang.

## Getting Started

Clone this repository to your local machine:

# Time Complexity and Space Complexity

**Time Complexity**: O(V * E), where V is the number of vertices and E is the number of edges in the graph. This is because the algorithm relaxes all edges V-1 times.

**Space Complexity**: O(V), where V is the number of vertices. This is due to the distance array used to store the shortest distances from the source.

## Usage

The program initializes a graph with a specified number of vertices and edges. It adds edges to the graph using the `addEdge` function. It performs the Bellman-Ford algorithm starting from a specified source vertex and prints the shortest distances to all vertices.

## Functions

The implementation contains the following key functions:

- `Graph(int V, int E)`: Constructor to initialize the graph with V vertices and E edges.
- `void addEdge(int u, int v, int w)`: Adds an edge from vertex u to vertex v with weight w.
- `void bellmanFord(int src)`: Performs the Bellman-Ford algorithm starting from the vertex src and prints the shortest distances to all vertices.

## Author

Moizna Zaheer

Feel free to reach out to me with any questions or issues.

