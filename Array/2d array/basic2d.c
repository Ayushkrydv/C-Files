#include<stdio.h>

int main(){
    // int arr[2][2];

    // // input 2d array.

    // for (int i=0; i<2; i++){
    //     for(int j = 0; j<2; j++){
    //         printf("arr[%d][%d] =",i,j);
    //         scanf("%d\t",&arr[i][j]);
    //     }
    //     printf("\n");
    // }
    
    // // printing 2d array.

    // for (int i=0; i<2; i++){
    //     for(int j = 0; j<2; j++){
    //         printf("%d\t",arr[i][j]);
    //     }
    //     printf("\n");
    // }
    
    int row, col;
    int arr[row][col];
   
    printf("enter row & column = %d %d", row, col);
    scanf("%d%d",&row,&col);

    for (int i=0; i<row; i++){
        for(int j = 0; j<col; j++){
            printf("arr[%d][%d] =",i,j);
            scanf("%d\t",&arr[i][j]);
        }
        printf("\n");
    }
    
    for (int i=0; i<row; i++){
        for(int j = 0; j<col; j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }

   
}