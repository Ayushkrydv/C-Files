#include<stdio.h>

void swap(int arr[]);
int main(){
    int arr[2] = {2,4};
    swap(arr);
    printf("%d %d ",arr[0],arr[1]);
    
    return 0;        
}
void swap(int arr[2]){
    int temp = arr[0];
    arr[0] = arr[1];
    arr[1] = temp;
    return;
}