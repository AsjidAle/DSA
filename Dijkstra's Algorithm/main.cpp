#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

// A structure to represent a node in the priority queue
typedef pair<int, int> iPair;

// A class to represent a graph
class Graph {
    int V; // Number of vertices
    vector<vector<iPair>> adj; // Adjacency list representation

public:
    Graph(int V);
    void addEdge(int u, int v, int w);
    void dijkstra(int src);
};

Graph::Graph(int V) {
    this->V = V;
    adj.resize(V);
}

void Graph::addEdge(int u, int v, int w) {
    adj[u].push_back(make_pair(v, w));
    adj[v].push_back(make_pair(u, w)); // Add v to u's list and u to v's list (for undirected graph)
}

void Graph::dijkstra(int src) {
    // Priority queue to store (distance, vertex) pairs
    priority_queue<iPair, vector<iPair>, greater<iPair>> pq;

    // Initialize distances to all vertices as infinite and source distance as 0
    vector<int> dist(V, INT_MAX);
    dist[src] = 0;

    // Insert source itself in priority queue and initialize its distance as 0
    pq.push(make_pair(0, src));

    while (!pq.empty()) {
        // The first vertex in pair is the minimum distance vertex, extract it from priority queue
        int u = pq.top().second;
        pq.pop();

        // Traverse through all adjacent vertices of u
        for (auto& neighbor : adj[u]) {
            int v = neighbor.first;
            int weight = neighbor.second;

            // If there is a shorter path to v through u
            if (dist[v] > dist[u] + weight) {
                // Update distance of v
                dist[v] = dist[u] + weight;
                pq.push(make_pair(dist[v], v));
            }
        }
    }

    // Print the shortest distances from source
    cout << "Vertex Distance from Source" << endl;
    for (int i = 0; i < V; ++i) {
        cout << i << "\t\t" << dist[i] << endl;
    }
}

int main() {
    int V = 9; // Number of vertices in the graph

    Graph g(V);

    // add edge u->v with weight w
    g.addEdge(0, 1, 4);
    g.addEdge(0, 7, 8);
    g.addEdge(1, 2, 8);
    g.addEdge(1, 7, 11);
    g.addEdge(2, 3, 7);
    g.addEdge(2, 8, 2);
    g.addEdge(2, 5, 4);
    g.addEdge(3, 4, 9);
    g.addEdge(3, 5, 14);
    g.addEdge(4, 5, 10);
    g.addEdge(5, 6, 2);
    g.addEdge(6, 7, 1);
    g.addEdge(6, 8, 6);
    g.addEdge(7, 8, 7);

    g.dijkstra(0);

    return 0;
}
