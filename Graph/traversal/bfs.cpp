#include<iostream>
#include<vector>
#include<queue>
using namespace std;
vector<int> bfs(int V, vector<vector<int>> adj, int start){
    vector<int> ans;
    queue<int> q;
    vector<int> visited(V, 0);
    q.push(start);
    visited[start] = 1;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        ans.push_back(node);
        for(auto neighbour : adj[node]){
            if(!visited[neighbour]){
                visited[neighbour] = 1;
                q.push(neighbour);
            }
        }
    }
    return ans;

}
int main(){
    int V, E;
    cout<<"enter vert and edges";
    cin >> V >> E;
    vector<vector<int>> adj(V);
    for(int i = 0; i < E; i++){
        int u, v;
        cout<<"connections";
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
        int start;
        cout << "Enter the starting vertex for BFS: ";
        cin >> start;
        vector<int> ans = bfs(V, adj, start);
        for (int node : ans) {
            cout << node << " ";
        }

        return 0;
    
}




