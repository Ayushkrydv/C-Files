#include<stdio.h>

void checkDigit(int);

int main(){
    int num;
    printf("Enter Num = ");
    scanf("%d",&num);
    checkDigit(num);
    return 0;
}

void checkDigit(int num){
    int count = 0;
    int temp = num;

  
    while(num > 0 || num < 0 ){
    
        // int rem = 10*num + rem;
        num = num / 10;
        count++;
    }
    if(count  == 2){
        if(temp%2 == 0){
            printf("Even digits");
        }else{
            printf("Odd digits");
        }

    }else{
        printf("Enter Two digit Num");
    }


}
