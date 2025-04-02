#include<stdio.h>

int main(){
    float num1;
    int num2;

    printf("Enter num1 : ");
    scanf("%f",&num1);
    printf("Enter num2 : ");
    scanf("%d",&num2);
    printf("Addition = %f\n",num1+num2);
    printf("Subtraction = %f\n",num1-num2);
    printf("Multiplication = %f\n",num1*num2);
    printf("Divide = %f",num1/num2);

    return 0;
}