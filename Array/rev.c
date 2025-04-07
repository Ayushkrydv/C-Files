#include<stdio.h>

void rev(int arr[], int n);

int main(){
    int arr[] = {1,2,3,4,5};
    rev(arr,5);
for(int i = 0; i<=4; i++){
     printf("%d\t",arr[i]);
}
}


void rev(int arr[], int n){
    int i;
    int j;
    for(int i = 0, j=n-1 ; i<j ; i++,j-- ){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
//method 2
for(int i = 0; i<=n/2; i++){
    int a = arr[i];
    int b = arr[n-i-1];

    arr[i] = b;
    arr[n-i-1] = a;

//  arr[i] = arr[n-1-i]; // error
//  arr[n-i-1] = arr[i]; // error after second index value repeat itself
}
}

