#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
using namespace std;

// Function to perform BFS traversal of the graph
vector<int> bfs(const unordered_map<int, vector<int>>& graph, int start) {
    vector<int> traversal; // To store the BFS traversal result
    unordered_map<int, bool> visited; // To keep track of visited nodes
    queue<int> q; // Queue for BFS traversal

    // Initialize all nodes as not visited
    for (const auto& pair : graph) {
        visited[pair.first] = false;
    }

    // Start BFS traversal from the given start node
    q.push(start);
    visited[start] = true;

    while (!q.empty()) {
        int current = q.front();
        q.pop();
        traversal.push_back(current); // Add current node to traversal result

        // Visit all neighbors of the current node
        for (int neighbor : graph.at(current)) {
            if (!visited[neighbor]) {
                q.push(neighbor);
                visited[neighbor] = true;
            }
        }
    }

    return traversal;
}

int main() {
    // Example graph represented as an adjacency list
    unordered_map<int, vector<int>> graph = {
        {0, {1, 2}},
        {1, {0, 3, 4}},
        {2, {0, 5}},
        {3, {1}},
        {4, {1}},
        {5, {2}}
    };

    // Perform BFS traversal starting from node 0
    vector<int> result = bfs(graph, 0);

    // Print the BFS traversal result
    cout << "BFS Traversal: ";
    for (int node : result) {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}
