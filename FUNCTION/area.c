#include<stdio.h>

int areaOfsqaure(int a);
int areaOfrect(int a, int b);
float areaOfcircle(int r);

int main(){

    int a,b,r ;
    printf("Enter the value of a,b,r");
    scanf("%d%d%d",&a,&b,&r);

    printf("%d\n", areaOfsqaure(a));
    printf("%d\n",areaOfrect(a,b));
    printf("%f\n",areaOfcircle(r));
    return 0;
}

int areaOfsqaure(int a){
    return a*a;
}
int areaOfrect(int a, int b){
    return a*b;
}
float areaOfcircle(int r){
    return (3.14*r*r);
}