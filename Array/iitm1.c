#include<stdio.h>

void checkNum(int a, int arr[], int brr[]);

int main(){
    int a = 3;
    int arr[4] = {1,2,3,4};
    int brr[4] = {6,3,5,7};
    
    checkNum(a,arr,brr);
    
    return 0;
}

void checkNum(int a, int arr[], int brr[]){ 
    for(int i = 0; i <= 2; i++){
        if(arr[i] == 3){
            printf("Num present\n");
        }
    }
    for(int j = 1; j < 4; j++){
        if(brr[j] == 3){
            printf("Num present");
        }
    }
}