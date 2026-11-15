// 
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={4,0,6,0,5};
//     int n=5;
//     int j = 0;
//     for(int i=0;i<n;i++){
//         if(arr[i]!=0){
//             arr[j++] = arr[i];
//         }
//     }
//     while(j<n){
//         arr[j++] = 0;
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    int arr[5]={0,0,6,0,5};
    int n=5;
    int i=0,j=n-1;
    while(i<n){
        if(arr[i]!=0 && i<j){
            i++;
        }
        else if(arr[i]==0 && i<j){
            swap(arr[i],arr[j]);
            j--;
        }
        else{
            break;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}