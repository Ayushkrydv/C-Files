#include<stdio.h>

int main(){
    int arr[4][2];
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
           printf("Enter Element = \n");
            scanf("%d",arr[i][j]);
        }
    }
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
           printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}