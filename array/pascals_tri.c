#include<stdio.h>
int fact(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f=f*i;

    }return f;

}int ncr(int n,int r){
    
    int ncr=fact(n)/(fact(r)*fact(n-r));
    return ncr;
}int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-i-1;j++){
            printf(" ");

        }for(int k=0;k<=i;k++){
            printf("%d ",ncr(i,k));
        }printf("\n");
    }
    return 0;

}