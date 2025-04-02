#include<stdio.h>

int main(){
    int num1, num2 ,lcm, gcd ;
    
    printf("Enter two number ");
    scanf("%d%d", &num1, &num2);

    int n = num1;
    for(int n = num1; n>0; n-- ){
        if(num2%n==0 && num1%n==0){
            printf("gcd is %d", n);
            
            break;
        } 
    }
    lcm = num1*num2/gcd;
    printf("LCM = %d",lcm);
    
    }
