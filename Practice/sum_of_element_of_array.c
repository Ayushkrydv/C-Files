#include<stdio.h>

int main(){
    int n;
    int sum = 0;
    printf("Enter the no of Element of Array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter Elements of Array:\n");
    
    for(int i = 0; i < n; i++){  
        scanf("%d", &arr[i]);  
        sum = sum + arr[i];
    }
    
    printf("The Sum = %d\n", sum);

    return 0;
}