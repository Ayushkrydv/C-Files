#include<stdio.h>

int main(){
    int arr[5];
    int i;
    for(int i = 0; i<=4; i++){
        printf("Enter %d Element of Array ",i);
        scanf("%d",&arr[i]); 
    }
    int largest = arr[0];
    int smallest = arr[0];

    for(int i = 0; i<=4; i++){
    if(arr[i]>largest){
        largest = arr[i];
        printf("Largest Element Of Array = %d\n",largest);
    } 
    if(arr[i]<smallest){
        smallest = arr[i];
        printf("Smallest Element Of Array = %d ", smallest);
        }
       
    }

    return 0;
}
