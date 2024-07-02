#include <iostream>
#include <vector>
#include <list>
#include <unordered_map>

using namespace std;

// Function to perform DFS on a graph
void dfs(int current_node, unordered_map<int, bool>& visited,
         const unordered_map<int, list<int>>& adjacency_list,
         vector<int>& current_component) {
    // Add the current node to the current component
    current_component.push_back(current_node);
    visited[current_node] = true;

    // For each connected node, make a recursive call
    for (auto neighbor : adjacency_list.at(current_node)) {
        if (!visited[neighbor]) {
            dfs(neighbor, visited, adjacency_list, current_component);
        }
    }
}

// Function to find all connected components in a graph
vector<vector<int>> depthFirstSearch(int num_vertices, int num_edges,
                                   const vector<vector<int>>& edges) {
    // Prepare adjacency list
    unordered_map<int, list<int>> adjacency_list;
    for (const auto& edge : edges) {
        int vertex1 = edge[0];
        int vertex2 = edge[1];

        adjacency_list[vertex1].push_back(vertex2);
        adjacency_list[vertex2].push_back(vertex1);
    }

    // Initialize the visited map and the result vector
    unordered_map<int, bool> visited;
    vector<vector<int>> connected_components;

    // Iterate over all vertices
    for (int vertex = 0; vertex < num_vertices; ++vertex) {
        if (!visited[vertex]) {
            // Perform DFS for the current component
            vector<int> current_component;
            dfs(vertex, visited, adjacency_list, current_component);
            connected_components.push_back(current_component);
        }
    }

    return connected_components; // Return the list of connected components
}

int main() {
    int num_vertices = 5;
    int num_edges = 4;
    vector<vector<int>> edges = {{0, 1}, {1, 2}, {2, 3}, {3, 4}};

    vector<vector<int>> connected_components = depthFirstSearch(num_vertices, num_edges, edges);

    // Print the connected components
    for (const auto& component : connected_components) {
        for (auto node : component) {
            cout << node << " ";
        }
        cout << endl;
    }

    return 0;
}