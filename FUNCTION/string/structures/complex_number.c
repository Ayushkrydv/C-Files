#include<stdio.h>



struct cmpNum{
    int real;
    int img;
};


void storeCmpNum(struct cmpNum n1, struct cmpNum n2 , struct cmpNum n3);

int main(){
    
struct cmpNum n1 = { 5 , 6};

struct cmpNum n2 = { 1 , 7};

struct cmpNum n3 = {0};

storeCmpNum(n1,n2,n3, *ptr, *ptr1);
    return 0;
}

void storeCmpNum(struct cmpNum n1, struct cmpNum n2 , struct cmpNum n3){

n3.real = n1.real + n2.real;
n3.img = n1.img + n2.img;

printf("cmpNum n3 = %d, %d",n3.real , n3.img);


}