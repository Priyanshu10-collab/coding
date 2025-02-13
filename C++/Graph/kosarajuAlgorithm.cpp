#include<bits/stdc++.h>
using namespace std;

void dfs(int node, unordered_map<int,bool>&vis, stack<int> &st,unordered_map<int,list<int>> &adj){
    vis[node] = true;
    for(auto nbr: adj[node]){
        if(!vis[nbr]){
            dfs(nbr,vis,st,adj);
        }
    }
    //topological logic
    st.push(node);
}

void revDfs(int node,unordered_map<int,bool> &vis,unordered_map<int,list<int> >&adj){
    vis[node] = true;

    for(auto nbr: adj[node]){
        if(!vis[nbr]){
            revDfs(nbr,vis,adj);
        }
    }
}

int stronglyConnectedComponents(int v, vector<vector<int>> &edges)
{
    //adj
    unordered_map<int,list<int> > adj;
    for(int i=0;i<edges.size();i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
    }

    //topological sort
    stack<int> st;
    unordered_map<int,bool> vis;
    for(int i=0; i<v;i++){
        if(!vis[i]){
            dfs(i,vis,st,adj);
        }
    }

    //create a transpose graph
    unordered_map<int,list<int> >transpose;
    for(int i=0;i<v;i++){
        for(auto nbr: adj[i]){
            transpose[nbr].push_back(i);
        }
    }

    //dfs call using above ordering
    int count = 0;
    unordered_map<int,bool> vis2;
    while(!st.empty()){
        int top = st.top();
        st.pop();
        if(!vis2[top]){
            count++;
            revDfs(top,vis2,transpose);
        }

    }
    return count;
}

int main() {
    int v = 7; // number of vertices
    vector<vector<int>> edges = {
        {0, 1},
        {1, 2},
        {2, 0},
        {1, 3},
        {1, 4},
        {1, 6},
        {3, 5},
        {4, 5}
    };

    int count = stronglyConnectedComponents(v, edges);
    cout << "Number of strongly connected components: " << count << endl;

    return 0;
}