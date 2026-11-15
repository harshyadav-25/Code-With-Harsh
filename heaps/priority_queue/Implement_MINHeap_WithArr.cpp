#include<iostream>
using namespace std;
class MinHeap{
public:
    int idx;
    int arr[50];
    MinHeap(){
        idx = 1;
    }
    int top(){
        return arr[1];
    }
    void push(int val){
        arr[idx] = val;
        int i = idx;
        idx++;
        while(i!=1){
            int parent = i / 2;
            if(arr[i] < arr[parent]){
                swap(arr[i],arr[parent]);
                i = parent;
            }
            else break;

        
        }



    }

};

int main(){
    MinHeap pq;
    pq.push(10);
    pq.push(9);
    pq.push(20);
    pq.push(25);
    pq.push(2);
    pq.push(5);
    cout<<pq.top();
    
}