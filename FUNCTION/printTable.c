#include<stdio.h>

void printTable(int n);

int main(){
    int n;
    printf("Enter the value of n ");
    scanf("%d",&n);
    
    printTable(n);
   
    return 0;
}

void printTable(int x){
    for(int i=1; i<=10; i++){
        printf("%d\n",i*x);
    }
}