#include<stdio.h>

int main(){
    
    int arr[5] = {1,2,3,4,5};
    int largest = arr[0];
    int seclargest = arr[0];

    for(int i = 1; i <= 4; i++ ){
        if(arr[i]>largest){
            largest = arr[i];
        }} 
        for(int i = 1; i <= 4; i++ ){
        if(arr[i]!=largest && arr[i]>seclargest){
            seclargest = arr[i];
        }
    }
    printf("largest Element = %d\n",largest);
    printf("Second largest Element = %d\n",seclargest);
    return 0;
}