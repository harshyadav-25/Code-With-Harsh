#include<iostream>
#include<vector>
using namespace std;
int main(){
    int v, e;
    cin >> v >> e;
    //edges vector to store the edges dynamically
    vector<vector<int>> edges(e);
    for(int i = 0; i < e; i++){
        int u, v;
        cin >> u >> v;
        edges[i] = {u, v};
    }
    vector<vector<int>> adj(v);
    for(auto edge : edges){
        int u = edge[0];
        int v = edge[1];
        adj[u].push_back(v);
        adj[v].push_back(u);

    }
    for(int i = 0; i < v; i++){
        cout << i << " -> ";
        for(auto el : adj[i]){
            cout << el << " , ";
        }
        cout << "\n";
    }

}