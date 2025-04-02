#include<stdio.h>

int main(){
    int arr[5] = {1,2,3,4,5};
    for(int i = 0; i<=5; i++){
        printf("Address of Element of Array = %p\n",&arr[i]);
    }
    int b[3];
    printf("%d",b[0]);
    return 0;
}