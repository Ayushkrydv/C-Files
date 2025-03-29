#include<stdio.h>

void revArray(int arr[],int n);
void printArray(int arr[], int n);

int main(){
    int arr[]={1,2,3,4,5,6};
    revArray(arr,6);
    printArray(arr,6);
    return 0;
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

void revArray(int arr[], int n){

    for(int i=0; i<n/2 ; i++){
    int firstvalue = arr[i];
    int secondvalue = arr[n-1-i];

    arr[i] = secondvalue;
    arr[n-i-1] = firstvalue;

    }
}

