
#include <bits/stdc++.h>
using namespace std;

vector<int> dfs(int V, vector<vector<int>>& adj, int start) {

    // Stores DFS traversal
    vector<int> ans;

    // Tracks visited vertices
    vector<int> visited(V, 0);

    // Create a stack
    stack<int> st;

    // Start from the given vertex
    st.push(start);

    // Process until stack becomes empty
    while(!st.empty()) {

        // Get the top vertex
        int node = st.top();
        st.pop();

        // Skip if already visited
        if(visited[node]) {
            continue;
        }

        // Mark visited
        visited[node] = 1;

        // Store in traversal
        ans.push_back(node);

        // Push neighbors in reverse order
        for(int i = adj[node].size() - 1; i >= 0; i--) {

            int neighbor = adj[node][i];

            if(!visited[neighbor]) {
                st.push(neighbor);
            }
        }
    }

    return ans;
}

int main() {

    int V, E;
    cin >> V >> E;

    // Create adjacency list
    vector<vector<int>> adj(V);

    // Input undirected graph
    for(int i = 0; i < E; i++) {

        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int start;
    cin >> start;

    // Perform iterative DFS
    vector<int> result = dfs(V, adj, start);

    // Print traversal
    for(int node : result) {
        cout << node << " ";
    }

    return 0;
}
