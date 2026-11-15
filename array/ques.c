/*#include <stdio.h>

int rangeprime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; i++) {
        if (rangeprime(i)) {
            printf("%d ", i);
        }
    }
    return 0;
}*/
/*#include<stdio.h>

int main(){
    int n,prime=1;
    scanf("%d",&n);
    if(n<2){
        prime=0;
    }
    
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            prime=0;
            break;
        }
    }
    if(prime==1){
        printf("prime");
    }else{
        printf("not prime");
    }
}*/
/*#include<stdio.h>

int main(){
    int n1,n2,a,b,temp,gcd,lcm,sum;
    scanf("%d %d",&n1,&n2);
    a=n1;
    b=n2;
    while(b!=0){
        temp=b;
        b=a%b;
        a=temp;
    }gcd=a;
    lcm=(n1*n2)/gcd;
    sum=gcd+lcm;
    printf("%d",sum);

    return 0;
}*/
#include<stdio.h>

/*int main(){
    int a,b;
    char ch;
    scanf("%d %d %c",&a,&b,&ch);
    
    switch(ch){
        case '+':
        printf("%d\n",a+b);
        break;
        case '-':
        printf("%d\n",a-b);
        break;
        case '*':
        printf("%d\n",a*b);
        break;
        case '/':
        printf("%d",a/b);
        break;
        default:
        printf("INVALID");
    }
    return 0;
}*/
/*#include<stdio.h>

int main(){
    int per;
    scanf("%d",&per);
    if(per>=75 && per<=100){
        printf("GRADE A");
    }else if(per>=60 && per<75){
        printf("GRADE B");
    }else if(per>=40 && per<60){
        printf("GRADE c");
    }else{
        printf("grade f");
    }
    return 0;
}*/
/*#include<stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    (a==b && b==c)?printf("equilateral triangle"):((a==b&&a!=c)||(b==c&&b!=a)||(a==c&&a!=c))?printf("isosceles"):printf("scalen");
        return 0;
}*/
/*#include <stdio.h>

int main() {
    int num, choice;
    
    // Taking input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Displaying menu
    printf("Menu:\n");
    printf("1. Factorial\n");
    printf("2. Reverse\n");
    printf("3. Sum of digits\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    // Switch case for menu selection
    switch (choice) {
        case 1: {
            int fact = 1;
            for (int i = 1; i <= num; i++) {
                fact *= i;
            }
            printf("Factorial of %d is %d\n", num, fact);
            break;
        }
        case 2: {
            int rev = 0, temp = num;
            while (temp > 0) {
                rev = rev * 10 + temp % 10;
                temp /= 10;
            }
            printf("Reverse of %d is %d\n", num, rev);
            break;
        }
        case 3: {
            int sum = 0, temp = num;
            while (temp > 0) {
                sum += temp % 10;
                temp /= 10;
            }
            printf("Sum of digits of %d is %d\n", num, sum);
            break;
        }
        default:
            printf("Invalid choice\n");
    }

    return 0;
}*/
/*#include <stdio.h>

int main() {

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5 - i; j++)
            printf(" ");
        for (int j = 1; j <= 2*i-1; j++)
            printf("#");
        printf("\n");
    }

    return 0;
}*/
/*#include<stdio.h>

int main(){
    for(int i=1;i<=5;i++){
        for(int j=6-i;j<=5;j++){
            printf("%d ",j);
            
        }
    printf("\n");
    }return 0;
}*/
/*#include<stdio.h>
int main()
{
    int i, j=1;
    for(i=1;i<3;i++) {
        for(j=1;j<4;j++) {
            if(j==2) continue;
            printf("%d %d",i, j);
        }
    }
}*/
#include<stdio.h>

int main(){
    int a=0,b=1,c,n;
    scanf("%d",&n);
    printf("%d %d ",a,b);
    for(int i=2;i<n;i++){
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;

    }
    return 0;
}