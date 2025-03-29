#include<stdio.h>

float celtofarh(float);
int main(){
printf("%f", celtofarh(32));                    
    return 0;
}

float celtofarh(float f){
 float c = 5.0/9*(f-32);
 return c;
}