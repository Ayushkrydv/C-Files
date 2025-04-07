#include<stdio.h>

int main(){
    int oddSum = 0;
    int evenSum = 0;

    int arr[5] = {10,20,30,40,50};
    for(int i = 0; i<=4; i++ ){
        if(i%2==0){
            evenSum = evenSum + arr[i];
        }else{
            oddSum = oddSum + arr[i];
        }
    }
    printf("%d\n",evenSum);
    printf("%d\n",oddSum);
    printf("Differnce = %d\n",evenSum - oddSum);
    printf("Differnce = %d",oddSum - evenSum);
    return 0;
}