#include<stdio.h>

int main(){
    int mark;
    float average;
    float avg[5];
    int sum = 0;
    for(int i = 0; i<=4; i++){
        printf("Marks of student :");
        scanf("%d",&avg[i]);
        sum = sum + avg[i];
    }
    average = sum / 5.0; // Calculate average after the loop
    printf("%f", average);
}