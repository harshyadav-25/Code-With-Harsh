#include<iostream>
using namespace std;
int main(){
    int arr[5]={5,3,8,7,9};
    int n=5;
    for(int i=0;i<n-1;i++){//for passes n-1
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}