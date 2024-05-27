#include <iostream>
#include <vector>
#include <stack>

using namespace std;

// A recursive function used by topologicalSort
void topologicalSortUtil(int v, vector<bool>& visited, stack<int>& Stack, const vector<vector<int>>& adjMatrix) {
    // Mark the current node as visited
    visited[v] = true;

    // Recur for all the vertices adjacent to this vertex
    for (int i = 0; i < adjMatrix[v].size(); i++) {
        if (adjMatrix[v][i] && !visited[i]) {
            topologicalSortUtil(i, visited, Stack, adjMatrix);
        }
    }

    // Push current vertex to stack which stores result
    Stack.push(v);
}

// The function to do Topological Sort. It uses recursive topologicalSortUtil()
void topologicalSort(int V, const vector<vector<int>>& adjMatrix) {
    stack<int> Stack;

    // Mark all the vertices as not visited
    vector<bool> visited(V, false);

    // Call the recursive helper function to store Topological Sort starting from all vertices one by one
    for (int i = 0; i < V; i++) {
        if (!visited[i]) {
            topologicalSortUtil(i, visited, Stack, adjMatrix);
        }
    }

    // Print contents of stack
    while (!Stack.empty()) {
        cout << Stack.top() << " ";
        Stack.pop();
    }
}

int main() {
    // Number of vertices
    int V = 6;

    // Create a graph given in the above diagram in the form of an adjacency matrix
    vector<vector<int>> adjMatrix(V, vector<int>(V, 0));

    // Add edges
    adjMatrix[5][2] = 1;
    adjMatrix[5][0] = 1;
    adjMatrix[4][0] = 1;
    adjMatrix[4][1] = 1;
    adjMatrix[2][3] = 1;
    adjMatrix[3][1] = 1;

    cout << "Topological Sort of the given graph is: \n";
    topologicalSort(V, adjMatrix);

    return 0;
}
