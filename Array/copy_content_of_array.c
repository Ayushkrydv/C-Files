#include<stdio.h>

int main(){
    
    int arr[5] = {1,2,3,4,5};
    int brr[5];
    for(int i = 0; i<=4; i++){
        brr[i] = arr[4-i];
    
    printf("%d\t",brr[i]);
    }
    return 0;
}