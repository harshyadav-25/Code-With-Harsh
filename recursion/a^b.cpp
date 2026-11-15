#include<bits/stdc++.h>

using namespace std;
int rec_power(int a,int b){
    if(b == 0) return 1;
    return a * rec_power(a,b - 1);
}
//iterative method
int main(){
    int a;
    int b;
    cin>>a>>b;
    // int power = pow(a,b);
    // cout<<power;
    cout<<rec_power(a,b);
//     int power = 1;
// for(int i = 1; i <=b; i++){
//     power = power*a;
// }
// cout<<power;
   

}