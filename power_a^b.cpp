/*#include<iostream>
using namespace std;
int power(int a,int b){
    int ans=1;
    for(int i=1;i<=b;i++){
        ans=ans*a;
    }
    return ans;
}int main(){
    int a,b;
    cout<<"a,b"<<endl;
    cin>>a>>b;
    int ans=power(a,b);
    cout<<ans<<endl;
    return 0;
}*/

/*#include <iostream>
#include <cmath> // Required for pow()
using namespace std;

int main() {
    double a, b, result;

    cout << "Enter base (a): ";
    cin >> a;
    cout << "Enter exponent (b): ";
    cin >> b;

    result = pow(a, b); // Computes a^b

    cout << a << "^" << b << " = " << result << endl;
    
    return 0;
}*/
#include <iostream>
#include <cmath> 
using namespace std;

int power(int base, int power) {
    return pow(base, power);
}

int main() {
    int a, b;
    cout << " base a";
    cin >> a;
    cout << "power b";
    cin >> b;

    cout << a << "^" << b << "=" << power(a, b) << endl;
    
    return 0;
}
