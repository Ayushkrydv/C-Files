#include<stdio.h>

int swap(int a, int b);

int main(){
    int a = 2, b=3;
 swap(2,3);

    return 0;
}

int swap(int a, int b){
    int t = b;
    b=a;
    a=t;
    printf("a = %d\n b = %d\n", a , b);

}