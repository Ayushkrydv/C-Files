#include<stdio.h>

int main(){
    
    int num;
    int sum;
    printf("Enter num : ");
    scanf("%d",&num);
    sum = (num*(num-1))/2;
    printf("Sum of n num natural = %d",sum);

    return 0;
}