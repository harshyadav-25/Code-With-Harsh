#include<iostream>
using namespace std;
int oddSum(int a,int b){
    if(a > b) return 0;
    if(b%2==0) return oddSum(a,b-1);
    return b + oddSum(a,b-2);
}

int main(){
    int a = 1;
    int b = 10;
    cout<<oddSum(a,b);
    return 0;
}