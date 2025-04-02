#include<stdio.h>

int main(){
    
    int n;
    printf("Enter no of Element in array: ");
    scanf("%d",&n);
    int largest;
    int smallest;
    int arr[n];
   
    printf("Enter Element of array\n ");

    
    for(int i = 1; i < n; i++) {

     int largest = arr[0], smallest = arr[0];
 
        if(arr[i] > largest) {
            largest = arr[i];
        }
        if(arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    
    printf("Largest = %d\n",largest);
    printf("Smallest = %d",smallest);
    return 0; 
}