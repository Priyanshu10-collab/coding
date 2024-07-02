#include <unordered_map>
#include <queue>
#include <list>
#include <vector>
#include <iostream>
using namespace std;

bool isCyclicBFS(int src, unordered_map<int,bool> &visited, unordered_map<int, list<int>>& adj){
    unordered_map<int,int> parent;

    parent[src] = -1;
    visited[src] = true;
    queue<int> q;
    q.push(src);

    while(!q.empty()){
        int front = q.front();
        q.pop();

        for(auto neighbour: adj[front]){
            if(visited[neighbour] && neighbour != parent[front]){
                return true;
            }
            else if(!visited[neighbour]){
                q.push(neighbour);
                visited[neighbour] = true;
                parent[neighbour] = front;
            }
        }
    }
    return false;
}


bool isCyclicDFS(int node, int parent, unordered_map<int,bool> &visited, unordered_map<int, list<int>> &adj){
    visited[node] = true;

    for(auto neighbour: adj[node]){
        if(!visited[neighbour]){
            bool cycleDetected= isCyclicDFS(neighbour,node,visited,adj);
            if(cycleDetected)
                return true;
        }
        else if(neighbour != parent){
            //cycle present
            return true;
        }
    }
    return false;
}


string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
    //create adjacency List
    unordered_map<int, list<int>> adj;
    for (int i = 0; i < m; i++) {
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }
 
    //to handle disconnected components
    unordered_map<int,bool> visited;
    for(int i=0;i<n;i++){
        if(!visited[i]){
            bool ans = isCyclicDFS(i, -1, visited, adj);
            if(ans)
                return "Yes";
        }
    }
    return "No";
}

int main() {
    int n, m;
    cout << "Enter the number of nodes: ";
    cin >> n;
    cout << "Enter the number of edges: ";
    cin >> m;

    vector<vector<int>> edges(m, vector<int>(2));
    cout << "Enter the edges (u v):" << endl;
    for(int i = 0; i < m; ++i) {
        cin >> edges[i][0] >> edges[i][1];
    }

    string result = cycleDetection(edges, n, m);
    cout << "Cycle present? " << result << endl;

    return 0;
}
