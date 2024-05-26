#include <iostream>
#include <vector>
#include <climits>

using namespace std;

// A structure to represent an edge in the graph
struct Edge {
    int src, dest, weight;
};

// A class to represent a graph
class Graph {
public:
    int V, E; // Number of vertices and edges
    vector<Edge> edges; // Vector of edges

    Graph(int V, int E);
    void addEdge(int u, int v, int w);
    void bellmanFord(int src);
};

Graph::Graph(int V, int E) {
    this->V = V;
    this->E = E;
    edges.reserve(E);
}

void Graph::addEdge(int u, int v, int w) {
    edges.push_back({u, v, w});
}

void Graph::bellmanFord(int src) {
    // Step 1: Initialize distances from src to all other vertices as INFINITE
    vector<int> dist(V, INT_MAX);
    dist[src] = 0;

    // Step 2: Relax all edges |V| - 1 times.
    for (int i = 1; i <= V - 1; ++i) {
        for (const auto& edge : edges) {
            int u = edge.src;
            int v = edge.dest;
            int weight = edge.weight;
            if (dist[u] != INT_MAX && dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
            }
        }
    }

    // Step 3: Check for negative-weight cycles.
    for (const auto& edge : edges) {
        int u = edge.src;
        int v = edge.dest;
        int weight = edge.weight;
        if (dist[u] != INT_MAX && dist[u] + weight < dist[v]) {
            cout << "Graph contains negative weight cycle" << endl;
            return;
        }
    }

    // Print the distances to all vertices from the source
    cout << "Vertex Distance from Source" << endl;
    for (int i = 0; i < V; ++i) {
        cout << i << "\t\t" << dist[i] << endl;
    }
}

int main() {
    int V = 5; // Number of vertices in the graph
    int E = 8; // Number of edges in the graph

    Graph g(V, E);

    // add edge u->v with weight w
    g.addEdge(0, 1, -1);
    g.addEdge(0, 2, 4);
    g.addEdge(1, 2, 3);
    g.addEdge(1, 3, 2);
    g.addEdge(1, 4, 2);
    g.addEdge(3, 2, 5);
    g.addEdge(3, 1, 1);
    g.addEdge(4, 3, -3);

    g.bellmanFord(0);

    return 0;
}
