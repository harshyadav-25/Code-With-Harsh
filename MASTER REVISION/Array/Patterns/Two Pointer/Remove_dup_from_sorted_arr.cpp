// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {1,1,2,2,2,4,4,5,6,6,7};
//     int n = sizeof(arr)/ sizeof(arr[0]);
//     int i = 0;
//     int j = 1;
//     int c = 0;
//     int last = arr[n - 1];
//     while(j < n){
//         while(j < n && arr[i] == arr[j]){
//             j++;

//         }
//         if(arr[i] != arr[j]){
//             arr[i+1] = arr[j];
//             i++;
//         }
        

//     }
//     for(int i = 0; i < n; i++){
//         cout<<arr[i]<<" ";
//         c++;
//         if(arr[i] == last) break;
//     }
//     cout<<endl;
//     cout<<c;
    
//     return 0;
// }

//Aprroach 2
#include <iostream>
using namespace std;

int main() {

    int arr[] = {1,1,2,2,2,4,4,5,6,6,7};

    int n = sizeof(arr) / sizeof(arr[0]);

    int i = 1;

    for (int j = 1; j < n; j++) {

        if (arr[j] != arr[i - 1]) {
            arr[i] = arr[j];
            i++;
        }
    }

    cout << "Unique elements: ";

    for (int k = 0; k < i; k++) {
        cout << arr[k] << " ";
    }

    cout << "\nCount: " << i << endl;

    return 0;
}