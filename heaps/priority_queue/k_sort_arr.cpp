#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main() {
    int arr[] = {3,7,2,9,5,6,4,8,1};
    int n = sizeof(arr) / sizeof(arr[0]);
   
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i = 0; i < n; i++){
        pq.push(arr[i]);
    }

    for(int i = 0; i < 3 && !pq.empty(); i++){
        cout << pq.top() << " ";
        pq.pop();
    }
    
    return 0;
}
