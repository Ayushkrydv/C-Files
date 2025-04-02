#include<stdio.h>

int main(){
    int mark;
    printf("Enter your Mark");
    scanf("%d",&mark);

    if(mark>=90){
        printf("Your grade is 'S' ");
    }else if(mark>=80 && mark<90){
        printf("Your grade is 'A' ");
    }else if(mark>=70 && mark<80){
        printf("Your grade is 'B'");
    }else if(mark>=60 && mark<70){
        printf("Your grade is 'C'");
   }else if(mark>=50 && mark<60){
    printf("Your grade is 'D'");
   }else if(mark<50){
    printf("You are fail Jaa kar pdhle BSDK!");
   }
    return 0;
}