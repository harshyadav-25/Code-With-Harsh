
#include <bits/stdc++.h>
using namespace std;

// Function to create an adjacency list
vector<vector<int>> buildGraph(int vertices, vector<vector<int>>& edges) {

    // Create an adjacency list with 'vertices' empty lists
    vector<vector<int>> adj(vertices);

    // Traverse all the edges
    for (auto edge : edges) {

        // Extract the two endpoints of the current edge
        int u = edge[0];
        int v = edge[1];

        // Since the graph is undirected, add both connections
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // Return the constructed adjacency list
    return adj;
}

int main() {

    // Number of vertices and number of edges
    int vertices, E;
    cout << "Enter the number of vertices and edges: ";

    // Take graph size as input
    cin >> vertices >> E;

    // Store all edges in a 2D vector
    vector<vector<int>> edges(E);

    // Take input for every edge
    for (int i = 0; i < E; i++) {

        int u, v;

        // Read the two connected vertices
        cout<<"enter the edge (u v): ";
        cin >> u >> v;

        // Store the edge in the edges vector
        edges[i] = {u, v};
    }

    // Build the adjacency list
    vector<vector<int>> adj = buildGraph(vertices, edges);

    // Print the adjacency list
    for (int i = 0; i < vertices; i++) {

        cout << i << " -> ";

        // Print all neighbors of vertex i
        for (int neighbor : adj[i]) {
            cout << neighbor << " ";
        }

        cout << endl;
    }

    return 0;
}
