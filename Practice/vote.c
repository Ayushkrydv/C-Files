#include<stdio.h>

int main(){
    
    int age;
    printf("Enter age : ");
    scanf("%d",&age);
    
    if( age >= 18 ){
        printf("Your are Eligible for Vote ");
    }else{
        printf("Your are not Eligble");
    }
    // we can also use trinary operater
    printf("\n");
    (age>=18)?printf("You are Eligble for Vote"):printf("Your are not eligble");
    return 0;
}