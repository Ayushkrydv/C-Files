#include<stdio.h>

int main(){
    int sum = 0;
    int product = 1;
    int arr[5];
    for(int i = 0; i<=4; i++){
        printf("Enter %d element of Array ",i);
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i<=4; i++){
       sum = sum + arr[i];
       if (arr[i] != 0){ // Skip multiplication if the element is 0
           product = product * arr[i];
       }
    }
    printf("Sum = %d\n",sum);
    printf("Product = %d",product);
    
    return 0;
}