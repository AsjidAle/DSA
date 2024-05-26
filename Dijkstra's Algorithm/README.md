### Dijkstra's Algorithm Implementation in C++

This code demonstrates the implementation of Dijkstra's algorithm for finding the shortest paths from a single source vertex to all other vertices in a graph with non-negative weights.

#### Table of Contents
- Features
- Requirements
- Getting Started
- Time Complexity and Space Complexity
- Usage
- Functions
- Author

#### Features
- Implements Dijkstra's algorithm for a weighted graph with non-negative weights.
- Uses a priority queue for efficient vertex selection.
- Uses an adjacency list for efficient graph representation.

#### Requirements
- C++ compiler such as GCC or Clang.

#### Getting Started
Clone this repository to your local machine:

Change to the project directory:

#### Time Complexity and Space Complexity
- **Time Complexity**: O((V + E) log V), where V is the number of vertices and E is the number of edges in the graph. This is due to the use of a priority queue.
- **Space Complexity**: O(V), where V is the number of vertices. This is due to the distance array used to store the shortest distances from the source.

#### Usage
- The program initializes a graph with a specified number of vertices.
- It adds edges to the graph using the `addEdge` function.
- It performs Dijkstra's algorithm starting from a specified source vertex and prints the shortest distances to all vertices.

#### Functions
The implementation contains the following key functions:
- `Graph(int V)`: Constructor to initialize the graph with V vertices.
- `void addEdge(int u, int v, int w)`: Adds an edge from vertex u to vertex v with weight w.
- `void dijkstra(int src)`: Performs Dijkstra's algorithm starting from the vertex `src` and prints the shortest distances to all vertices.

#### Author
Moizna Zaheer

Feel free to reach out to me with any questions or issues.

---  
