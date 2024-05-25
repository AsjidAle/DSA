#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

// Function to calculate the total distance of a given route
int calculateDistance(const vector<vector<int>>& distanceMatrix, const vector<int>& route) {
    int totalDistance = 0;
    for (size_t i = 0; i < route.size() - 1; ++i) {
        totalDistance += distanceMatrix[route[i]][route[i + 1]];
    }
    // Add distance from last city back to the first city
    totalDistance += distanceMatrix[route.back()][route[0]];
    return totalDistance;
}

// Brute force approach to solve the TSP
int tspBruteForce(const vector<vector<int>>& distanceMatrix) {
    int n = distanceMatrix.size();
    vector<int> cities;
    for (int i = 0; i < n; ++i) {
        cities.push_back(i);
    }

    int minDistance = INT_MAX;
    vector<int> bestRoute;

    // Generate all permutations of cities
    do {
        int currentDistance = calculateDistance(distanceMatrix, cities);
        if (currentDistance < minDistance) {
            minDistance = currentDistance;
            bestRoute = cities;
        }
    } while (next_permutation(cities.begin(), cities.end()));

    // Print the best route
    cout << "Best route: ";
    for (int city : bestRoute) {
        cout << city << " ";
    }
    cout << bestRoute[0] << endl; // To complete the cycle
    return minDistance;
}

int main() {
    // Example distance matrix
    vector<vector<int>> distanceMatrix = {
        {0, 10, 15, 20},
        {10, 0, 35, 25},
        {15, 35, 0, 30},
        {20, 25, 30, 0}
    };

    int minDistance = tspBruteForce(distanceMatrix);
    cout << "Minimum distance: " << minDistance << endl;

    return 0;
}
