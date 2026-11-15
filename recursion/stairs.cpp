//Calculate the number of ways in which a person can climb n stairs if he can take exactly 1, 2 or 3
//steps at each level.
#include<iostream>
using namespace std;
int stairs(int n){
    if(n == 0) return 1;
    if (n < 0) return 0;
    return stairs(n-1)+stairs(n-2)+stairs(n-3);
    

}
int main(){
    
    cout<< stairs(4);
    return 0;

}