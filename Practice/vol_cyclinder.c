#include<stdio.h>

int main(){

    int height;
    float radius;
    float volume;

    printf("Enter height : ");
    scanf("%d",&height);
    printf("Enter radius : ");
    scanf("%f",&radius);
    volume = 3.1415 * radius * radius * height;
    printf("Volume of cyclinder = %.2f", volume);
    return 0;
    
}