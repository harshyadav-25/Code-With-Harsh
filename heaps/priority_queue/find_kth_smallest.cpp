#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main(){
    priority_queue<int> pq;

    vector<int> arr = {32, 10, 15, 28, 55, 13, 23, 35};
    int k = 4;
    int i = 0;
    while(i < arr.size()){
       
        pq.push(arr[i]);
        
        if(pq.size() > k) pq.pop();
        i++;
    }
    cout<<pq.top();

}