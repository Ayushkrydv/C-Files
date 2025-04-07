#include<stdio.h>

int main(){
    int x;
    int count = 0;
    printf("Enter X : ");
    scanf("%d",&x);

    int arr[5] = {1,2,3,4,5};
    for(int i = 0; i<=4; i++){
        if(arr[i]>x){
            count++;
        }
    }
    printf("%d",count);

    return 0;
}