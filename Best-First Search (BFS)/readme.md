### Best-First Search (BFS) Implementation in C++

This code demonstrates the implementation of the Best-First Search (BFS) algorithm for pathfinding in a graph using a heuristic.

#### Table of Contents
- Features
- Requirements
- Getting Started
- Time Complexity and Space Complexity
- Usage
- Functions
- Author

#### Features
- Implements the Best-First Search (BFS) algorithm for pathfinding.
- Uses a priority queue to explore nodes based on heuristic values.
- Uses an adjacency list for efficient graph representation.

#### Requirements
- C++ compilers such as GCC or Clang.

#### Getting Started
1. Clone this repository to your local machine.
2. Change to the project directory.

#### Time Complexity and Space Complexity
- **Time Complexity**: O(E log V), where V is the number of vertices and E is the number of edges in the graph. This is due to the use of a priority queue.
- **Space Complexity**: O(V), where V is the number of vertices. This is due to the priority queue and the visited array.

#### Usage
- The program initializes a graph with a specified number of vertices.
- It adds edges to the graph using the `addEdge` function.
- It performs Best-First Search starting from a specified source vertex and prints whether the target node is found.

#### Functions
The implementation contains the following key functions:
- `Graph(int V)`: Constructor to initialize the graph with V vertices.
- `void addEdge(int u, int v, double w)`: Adds an edge from vertex u to vertex v with weight w.
- `void bestFirstSearch(int src, int target, vector<double>& heuristic)`: Performs Best-First Search starting from the vertex `src` and prints whether the target node is found.

#### Author
Moizna Zaheer

Feel free to reach out to me with any questions or issues.
