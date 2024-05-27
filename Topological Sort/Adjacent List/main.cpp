#include <iostream>
#include <vector>
#include <stack>

using namespace std;

// A utility function to add an edge in a directed graph
void addEdge(vector<vector<int>>& adj, int u, int v) {
    adj[u].push_back(v);
}

// A recursive function used by topologicalSort
void topologicalSortUtil(int v, vector<bool>& visited, stack<int>& Stack, const vector<vector<int>>& adj) {
    // Mark the current node as visited
    visited[v] = true;

    // Recur for all the vertices adjacent to this vertex
    for (int i : adj[v]) {
        if (!visited[i]) {
            topologicalSortUtil(i, visited, Stack, adj);
        }
    }

    // Push current vertex to stack which stores result
    Stack.push(v);
}

// The function to do Topological Sort. It uses recursive topologicalSortUtil()
void topologicalSort(int V, const vector<vector<int>>& adj) {
    stack<int> Stack;

    // Mark all the vertices as not visited
    vector<bool> visited(V, false);

    // Call the recursive helper function to store Topological Sort starting from all vertices one by one
    for (int i = 0; i < V; i++) {
        if (!visited[i]) {
            topologicalSortUtil(i, visited, Stack, adj);
        }
    }

    // Print contents of stack
    while (!Stack.empty()) {
        cout << Stack.top() << " ";
        Stack.pop();
    }
}

int main() {
    // Create a graph given in the above diagram
    int V = 6;
    vector<vector<int>> adj(V);

    addEdge(adj, 5, 2);
    addEdge(adj, 5, 0);
    addEdge(adj, 4, 0);
    addEdge(adj, 4, 1);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 1);

    cout << "Topological Sort of the given graph is: \n";
    topologicalSort(V, adj);

    return 0;
}
