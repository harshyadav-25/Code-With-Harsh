#include<iostream>
using namespace std;
int largest(int arr[],int n){
    int largest=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }return largest;
}
int main(){
    int arr[5];
    cout<<"array";
    for(int i=0;i<5;i++){

        cin>>arr[i];
    }
    int n=(sizeof(arr)/sizeof(arr[0]));
    int large=largest(arr,n);
    cout<<"largest="<<large<<endl;
    return 0;

}