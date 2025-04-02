#include<stdio.h>

int main(){
    int a;
    float b;
    int n;
    
    printf("Enter a and b : ");
    scanf("%d %f", &a, &b);
    
    printf("1(+) 2(-) 3(*) 4(/)");
    scanf("%d",&n);

    switch (n){
        case 1 : 
        printf("Addition = %f",a+b);
        break;

        case 2 :
        printf("Subtraction = %f",a-b);
        break;

        case 3 : 
        printf("Multiplication = %f",a*b);
        break;

        case 4 : 
        printf("Divsion = %f",a/b);
        break;

        default : 
        printf("Case is not matched\n Try Again!");
    }
    return 0;
}