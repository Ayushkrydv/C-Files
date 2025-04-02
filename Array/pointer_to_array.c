#include<stdio.h>

int main(){
    int a, *x,*y,*z ;
    int arr[] ={10,20,30,40,50,60};
    x = &a; 
    printf("%u\n",x);
    y = &a; 
    printf("%u\n",y);
    z = &a;
    printf("%u\n",z);

    x = x+3;
    printf("%u\n",x);
    y = y-2;
    printf("%u\n",y);
    x = &arr[1];
    y = &arr[4];
    printf("%d\n",y-x);
    x = &arr[4];
    z = (arr+4);
    if(x==z){
        printf("equal");
    }else{
        printf("not equal");
    }

    return 0;
}