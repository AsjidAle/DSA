#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Graph {
    int V; // Number of vertices
    vector<vector<int>> adj; // Adjacency list

public:
    Graph(int V);
    void addEdge(int v, int w);
    void BFS(int start);
};

Graph::Graph(int V) {
    this->V = V;
    adj.resize(V);
}

void Graph::addEdge(int v, int w) {
    adj[v].push_back(w); // Add w to v’s list.
}

void Graph::BFS(int start) {
    vector<bool> visited(V, false); // Mark all vertices as not visited
    queue<int> queue;

    // Mark the current node as visited and enqueue it
    visited[start] = true;
    queue.push(start);

    while (!queue.empty()) {
        // Dequeue a vertex from queue and print it
        int v = queue.front();
        cout << v << " ";
        queue.pop();

        // Get all adjacent vertices of the dequeued vertex v. If an adjacent has not been visited, then mark it visited and enqueue it.
        for (auto i = adj[v].begin(); i != adj[v].end(); ++i) {
            if (!visited[*i]) {
                visited[*i] = true;
                queue.push(*i);
            }
        }
    }
}

int main() {
    Graph g(5); // Create a graph with 5 vertices

    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
    g.addEdge(3, 4);

    cout << "Breadth First Traversal starting from vertex 2:\n";
    g.BFS(2);

    return 0;
}
