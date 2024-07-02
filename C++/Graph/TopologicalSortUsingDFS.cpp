#include <bits/stdc++.h>

using namespace std;

void dfs(int node, vector<bool> &visited, stack<int> &s, unordered_map<int, list<int>> &adj) {
    visited[node] = true;

    for (auto neighbour : adj[node]) {
        if (!visited[neighbour]) {
            dfs(neighbour, visited, s, adj);
        }
    }

    s.push(node);
}

vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e) {
    // Create adjacency list
    unordered_map<int, list<int>> adj;

    for (int i = 0; i < e; i++) {
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
    }

    // Initialize visited array and stack
    vector<bool> visited(v, false);
    stack<int> s;

    // Perform DFS for all unvisited nodes
    for (int i = 0; i < v; i++) {
        if (!visited[i]) {
            dfs(i, visited, s, adj);
        }
    }

    // Build the topological order
    vector<int> ans;

    while (!s.empty()) {
        ans.push_back(s.top());
        s.pop();
    }

    return ans;
}