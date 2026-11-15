#include <iostream>
using namespace std;

int main() {

    int arr[] = {0,1,0,3,0,0,0,0,1,0,12};

    int n = sizeof(arr) / sizeof(arr[0]);
    int i = 0;
    int j = 0;
    while(j < n){
        if(arr[j] != 0){
            swap(arr[i],arr[j]);
            i++;
        }
        j++;
        
    }

    
    for (int k = 0; k < n; k++) {
        cout << arr[k] << " ";
    }

    return 0;
}