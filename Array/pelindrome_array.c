#include<stdio.h>

void checkPelindrome(int arr[], int n);
int main(){
   int arr[] = {1,2,3,3,2,1};
   checkPelindrome(arr,6); 
    return 0;
}

void checkPelindrome(int arr[], int n){
    for(int i = 0; i < n / 2; i++){
        if(arr[i] != arr[n - i - 1]){
            printf("This Array is not Pelindrome\n");
            return;
        }
    }
    printf("This Array is Pelindrome\n");
}