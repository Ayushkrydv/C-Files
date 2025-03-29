#include<stdio.h>

int factorial(int n);

int main(){
    printf("factorial of is %d" ,factorial(0));
    return 0;
}

int factorial(int n){
    if(n==0){
        return 1;
    }
 int factNm1 = factorial(n-1);
 int factN = factorial(n-1)*n;
    return factN;
}