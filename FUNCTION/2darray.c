#include<stdio.h>

void printTable(int arr[][10], int row, int col, int num);

int main(){

    int tables[2][10];

    printTable(tables, 0,10,2);
    printTable(tables,1,10,3);

    for(int i=1; i<=10; i++){
    printf("%d\t",tables[0][i]);
        
    }
    printf("\n");
    
    for(int i=1; i<=10; i++){
    printf("%d\t",tables[1][i]);
    }
    return 0;
}

void printTable(int arr[][10], int row , int col, int num){

for(int i=1; i<=col; i++){

    arr[row][i]= num * i;
}

}
