#include<iostream>
#include<queue>
#include<vector>
using namespace std;
vector<int> bfs(int V, vector<vector<int>>& adj, int start){
    vector<int> ans;
    queue<int> q;
    vector<int> visited(V, 0);
    q.push(start);
    visited[start] = 1;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        ans.push_back(node);
        for(int neighbour : adj[node]){
            if(!visited[neighbour]){
                visited[neighbour] = 1;
                q.push(neighbour);
            }
        }


    }
    return ans;
}
int main(){

}