#include<bits/stdc++.h>

using namespace std;
int fibo(int n){
    if(n == 1 || n==2) return 1;
    return fibo(n-1) + fibo(n-2);
}

//iterative method
int main(){
    int n = 10;
    // int a = 0;
    // int b = 1;
    // int c;
    // for(int i = a; i <=10; i++){
    //      cout<<a<<" ";
    //     c = a+b;
    //     a = b;
    //     b = c;
       
    // }
    cout<<fibo(n)<<endl;
    
   
   

}