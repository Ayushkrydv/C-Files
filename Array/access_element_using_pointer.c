#include<stdio.h>

int main(){

    int *ptr;
    int arr[5] = {1,2,3,4,5};

    ptr = &arr[0];
    for(int i = 0; i<=4; i++){
     printf("Address = %u value = %d\n",ptr,*ptr);
     ptr++;
       
    }

    return 0;
}