#include<stdio.h>

int main(){
    int sum = 0;
    int first = 0, second = 1, next; // Initialize first and second
    int n;

    printf("Enter no of term of fibonacci series");
    scanf("%d",&n);

    for(int i = 0; i<n; i++){
        if(i<=1){
            next = i; 
        }else{
            next = second + first;
            first = second;
            second = next;
        }
        printf("%d\t",next);
        sum = sum + next;
    }
    printf("Sum of first %d terms of Fibonacci = %d\n",n,sum); // Updated message
    return 0;
}