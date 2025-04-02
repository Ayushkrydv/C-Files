#include<stdio.h>

int main(){
    int marks[5];
    for(int i = 0; i<=4; i++){
        printf("Enter Marks of Student %d ",i+1);
        scanf("%d",&marks[i]);
        }
        for(int i = 0; i<=4; i++){
            if(marks[i]<35){
            printf("Index of Falied Student = %d\n",i);
        }
    }
    return 0;
}