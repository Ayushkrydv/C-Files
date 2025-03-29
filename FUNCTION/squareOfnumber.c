#include<stdio.h>
#include<math.h>
int squareOfnumber(int n);

int main(){
    int n;
    printf("Enter the value of n");
    scanf("%d", &n);;
    printf("Square of number is %d\n", squareOfnumber(n));
    
    return 0;
}

int squareOfnumber(int n){
    int s = pow(n,2);
    return s;
}