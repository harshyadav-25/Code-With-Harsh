#include<iostream>
#include<queue>
using namespace std;

int main() {
    //in cpp max heap is default
    priority_queue<int> pq;
    pq.push(10);
    pq.push(5);
    pq.push(15);
    priority_queue<int, vector<int>, greater<int>> pq1;
    pq1.push(10);
    pq1.push(5);
    pq1.push(15);
    

    cout << pq.top() << endl; //always maintain max at top rest are random 
    cout<<pq1.top(); //always maintain min at top and rest are random

    return 0;
}
