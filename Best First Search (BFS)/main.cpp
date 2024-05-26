#include <iostream>
#include <vector>
#include <queue>
#include <functional>
#include <limits>
#include <cmath>

using namespace std;

// Structure to represent a node in the graph
struct Node {
    int vertex;
    double heuristic;
    Node(int v, double h) : vertex(v), heuristic(h) {}
};

// Comparator for the priority queue
struct CompareHeuristic {
    bool operator()(Node const& n1, Node const& n2) {
        // Higher heuristic value means lower priority
        return n1.heuristic > n2.heuristic;
    }
};

// Class to represent a graph
class Graph {
    int V; // Number of vertices
    vector<vector<pair<int, double>>> adj; // Adjacency list

public:
    Graph(int V);
    void addEdge(int u, int v, double w);
    void bestFirstSearch(int src, int target, vector<double>& heuristic);
};

Graph::Graph(int V) {
    this->V = V;
    adj.resize(V);
}

void Graph::addEdge(int u, int v, double w) {
    adj[u].push_back(make_pair(v, w));
    adj[v].push_back(make_pair(u, w)); // Add for undirected graph
}

void Graph::bestFirstSearch(int src, int target, vector<double>& heuristic) {
    // Priority queue to store (heuristic, vertex)
    priority_queue<Node, vector<Node>, CompareHeuristic> pq;
    vector<bool> visited(V, false);

    // Push the source node into the priority queue
    pq.push(Node(src, heuristic[src]));

    while (!pq.empty()) {
        int u = pq.top().vertex;
        pq.pop();

        // If target node is found
        if (u == target) {
            cout << "Target node " << target << " found!" << endl;
            return;
        }

        // Skip if the node is already visited
        if (visited[u]) continue;

        // Mark the node as visited
        visited[u] = true;

        // Traverse all the adjacent vertices of u
        for (auto& neighbor : adj[u]) {
            int v = neighbor.first;
            if (!visited[v]) {
                pq.push(Node(v, heuristic[v]));
            }
        }
    }

    cout << "Target node " << target << " not reachable from source " << src << "." << endl;
}

int main() {
    int V = 6; // Number of vertices in the graph
    Graph g(V);

    // Add edges with weights
    g.addEdge(0, 1, 1.0);
    g.addEdge(0, 2, 2.0);
    g.addEdge(1, 3, 1.0);
    g.addEdge(1, 4, 3.0);
    g.addEdge(2, 4, 1.0);
    g.addEdge(3, 5, 1.0);
    g.addEdge(4, 5, 1.0);

    // Heuristic values for each node (e.g., straight-line distance to the target)
    vector<double> heuristic = {7.0, 6.0, 2.0, 1.0, 3.0, 0.0};

    int src = 0;
    int target = 5;

    g.bestFirstSearch(src, target, heuristic);

    return 0;
}
