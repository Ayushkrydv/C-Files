#include<stdio.h>

int sumOftwonumber(int a, int b);

int main(){
    int a,b;
    printf("Enter the value of a and b ");
    scanf("%d %d", &a , &b);
    int result = sumOftwonumber(a,b);// argument/actual parameter
    printf("%d", result); 
    return 0;
}

int sumOftwonumber(int x , int y){ // parameter/formal parameter
    return x+y;
}