#include <iostream>
#include <vector>
#include <stack>

using namespace std;

class Graph {
    int V; // Number of vertices
    vector<vector<int>> adj; // Adjacency list

public:
    Graph(int V);
    void addEdge(int v, int w);
    void DFS(int start);
};

Graph::Graph(int V) {
    this->V = V;
    adj.resize(V);
}

void Graph::addEdge(int v, int w) {
    adj[v].push_back(w); // Add w to v’s list.
}

void Graph::DFS(int start) {
    vector<bool> visited(V, false); // Mark all vertices as not visited
    stack<int> stack;

    // Push the current source node.
    stack.push(start);

    while (!stack.empty()) {
        // Pop a vertex from stack and print it
        int v = stack.top();
        stack.pop();

        // Stack may contain same vertex twice. So we need to print the popped item only if it is not visited.
        if (!visited[v]) {
            cout << v << " ";
            visited[v] = true;
        }

        // Get all adjacent vertices of the popped vertex v. If an adjacent has not been visited, then push it to the stack.
        for (auto i = adj[v].rbegin(); i != adj[v].rend(); ++i) {
            if (!visited[*i]) {
                stack.push(*i);
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

    cout << "Depth First Traversal starting from vertex 2:\n";
    g.DFS(2);

    return 0;
}
