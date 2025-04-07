#include<stdio.h>

int main(){

    int evenIndex = 0;
    int oddIndex = 1;

    int arr[5] = {1,2,3,4,5};
// even or odd index change ho raha hai
    for(int i=0; i<=4; i++){
        if(i%2 == 0){
        evenIndex = i+10;
            printf("Even Index = %d\n",evenIndex);
        }else{
            oddIndex = i*2;
            printf("Odd index = %d\n",oddIndex);
        }
    }

        printf("\n");
// Value of Index change ho raha hai.

    for(int i=0; i<=4; i++){
        if(arr[i]%2 == 0){
          arr[i] = arr[i] + 10;
            printf("Even Index = %d\n",arr[i]);
        }else{
            arr[i] = arr[i]*2;
            printf("Odd index = %d\n",arr[i]);
        }
    }
    return 0;
}