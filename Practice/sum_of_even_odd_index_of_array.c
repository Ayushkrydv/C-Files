#include<stdio.h>

int main(){
    int n;
    int evenSum = 0;
    int oddSum = 0;
    printf("Enter the no of Element of Array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter Elements of Array:\n");
    
    for(int i = 0; i < n; i++){  
        scanf("%d", &arr[i]);  
        if(i%2==0){
        evenSum = evenSum + arr[i];
    }else{
        oddSum = oddSum + arr[i];
    }
}
    printf("The Sum = %d\n", evenSum);
    printf("The Sum = %d", oddSum);
    return 0;
}