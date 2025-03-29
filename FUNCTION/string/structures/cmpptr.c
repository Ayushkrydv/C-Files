#include<stdio.h>



struct cmpNum{
    int real;
    int img;
};


void storeCmpNum(struct cmpNum n1, struct cmpNum n2 , struct cmpNum n3 , struct cmpNum *ptr, struct cmpNum *ptr1);

int main(){
    
struct cmpNum n1 = { 5 , 6};
struct cmpNum *ptr = &n1;
struct cmpNum n2 = { 1 , 7};
struct cmpNum *ptr1 = &n2;
struct cmpNum n3 = {0};

storeCmpNum(n1,n2,n3,*ptr, *ptr1);
    return 0;
}

void storeCmpNum(struct cmpNum n1, struct cmpNum n2 , struct cmpNum n3 , struct cmpNum *ptr, struct *ptr1){

n3.real = n1.real + n2.real;
n3.img = n1.img + n2.img;

printf("cmpNum n3 = %d, %d",n3.real , n3.img);

n3.real = (*ptr).real + (*ptr1).real;
n3.img =  (*ptr).img + (*ptr1).img;

printf("cmpNum n3 = %d, %d",n3.real , n3.img);
}


// wrong concept
 
