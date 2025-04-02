#include<stdio.h>

int main(){

    int base;
    float height;
    float area;
    printf("Enter Base : ");
    scanf("%d",&base);
    printf("Enter height : ");
    scanf("%f",&height);
    area = (base*height)/2;
    printf("Area of Triangle = %f",area);

    return 0;
}   