#include<stdio.h>

struct vector {
    int x;
    int y;
};

void vectorSum(struct vector v1, struct vector v2, struct vector sum);

int main(){
 
    struct vector v1;
    struct vector v2;
    struct vector sum = {0};

    v1.x = 5;
    v1.y = 10;
    v2.x = 2;
    v2.y = 4;

    vectorSum(v1,v2,sum);
    return 0;
}

void vectorSum(struct vector v1, struct vector v2, struct vector sum){

sum.x = v1.x+v2.x;
sum.y = v1.y+v2.y;
    
printf(" vector sum = %d, %d", sum.x , sum.y);

}