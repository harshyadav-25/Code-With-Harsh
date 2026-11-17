
#include <bits/stdc++.h>
using namespace std;

// Recursive DFS function
void dfs(int node, vector<vector<int>>& adj,
         vector<int>& visited, vector<int>& ans) {

    // Mark current node as visited
    visited[node] = 1;

    // Add current node to result
    ans.push_back(node);

    // Visit all unvisited neighbors
    for(int neighbor : adj[node]) {

        if(!visited[neighbor]) {
            dfs(neighbor, adj, visited, ans);
        }
    }
}

int main() {

    int V, E;
    cin >> V >> E;

    // Create adjacency list
    vector<vector<int>> adj(V);

    // Take undirected graph input
    for(int i = 0; i < E; i++) {

        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // Create visited array and answer
    vector<int> visited(V, 0);
    vector<int> ans;

    int start;
    cin >> start;

    // Start DFS
    dfs(start, adj, visited, ans);

    // Print traversal
    for(int node : ans) {
        cout << node << " ";
    }

    return 0;
}
