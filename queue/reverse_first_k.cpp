#include<iostream>
#include<queue>
#include<stack>
#include<vector>
using namespace std;

int main(){
    queue<int>q;
    stack<int>st;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    int n = q.size();
    int k = 2;
    for(int i = 0; i < k; i++){
        int ele = q.front();
        st.push(ele);
        q.pop();
        


    }
    while(!st.empty()) {
        q.push(st.top());
        st.pop();
    }

    for(int i = 0; i < n-k; i++){
        q.push(q.front());
        q.pop();

    }
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;


}