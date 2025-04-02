#include<stdio.h>
 
int main(){
    int num;
    
    printf("Enter Num : ");
    scanf("%d",&num);
    int evenSum = 0; 
    int oddSum = 0;
    int digit;

    while(num!=0){
        digit =num%10;
        if(digit%2 == 0){
         evenSum = evenSum+digit;
        }else{
            oddSum +=digit;
        }
        num = num/10;
    }
    printf("Sum of even digit = %d\n",evenSum);
    printf("sum of odd digit = %d",oddSum);
}