#include<iostream>
using namespace std;
int Min(int arr[],int n){
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }return min;
}
int Max(int arr[],int n){
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }return max;
}
int main(){
    int arr[]={16,8,6,5,9,15,1,4,19,12};
    int n=sizeof(arr)/sizeof(arr[0]);
    int max=Max(arr,n);
    int min=Min(arr,n);
    cout<<max<<endl;
    cout<<min<<endl;
}