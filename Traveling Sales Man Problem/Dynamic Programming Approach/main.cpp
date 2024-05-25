#include <iostream>
#include <vector>
#include <cmath>
#include <climits>

using namespace std;

const int INF = INT_MAX;

// Function to solve the TSP using Dynamic Programming
int tspDynamicProgramming(const vector<vector<int>>& distanceMatrix) {
    int n = distanceMatrix.size();
    int VISITED_ALL = (1 << n) - 1;
    vector<vector<int>> dp(1 << n, vector<int>(n, INF));

    // Initialize base cases
    for (int i = 0; i < n; ++i) {
        dp[1 << i][i] = distanceMatrix[0][i];
    }

    // Iterate over all subsets of cities
    for (int mask = 0; mask < (1 << n); ++mask) {
        for (int i = 0; i < n; ++i) {
            if (mask & (1 << i)) { // If city i is in the subset represented by mask
                for (int j = 0; j < n; ++j) {
                    if (i != j && (mask & (1 << j))) { // If city j is in the subset and not the same as i
                        dp[mask][i] = min(dp[mask][i], dp[mask ^ (1 << i)][j] + distanceMatrix[j][i]);
                    }
                }
            }
        }
    }

    // Find the minimum cost to return to the starting city
    int minCost = INF;
    for (int i = 1; i < n; ++i) {
        minCost = min(minCost, dp[VISITED_ALL][i] + distanceMatrix[i][0]);
    }

    // Reconstruct the path
    int mask = VISITED_ALL;
    int lastCity = 0;
    vector<int> path;

    for (int i = 0; i < n; ++i) {
        int best = -1;
        for (int j = 1; j < n; ++j) {
            if (mask & (1 << j)) {
                if (best == -1 || dp[mask][j] + distanceMatrix[j][lastCity] < dp[mask][best] + distanceMatrix[best][lastCity]) {
                    best = j;
                }
            }
        }
        path.push_back(best);
        mask ^= (1 << best);
        lastCity = best;
    }

    // Print the best route
    cout << "Best route: 0 ";
    for (int i = path.size() - 1; i >= 0; --i) {
        cout << path[i] << " ";
    }
    cout << "0" << endl; // Return to the starting city

    return minCost;
}

int main() {
    // Example distance matrix
    vector<vector<int>> distanceMatrix = {
        {0, 10, 15, 20},
        {10, 0, 35, 25},
        {15, 35, 0, 30},
        {20, 25, 30, 0}
    };

    int minCost = tspDynamicProgramming(distanceMatrix);
    cout << "Minimum cost: " << minCost << endl;

    return 0;
}
