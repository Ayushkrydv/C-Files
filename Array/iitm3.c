#include<stdio.h>

void checkDom(char str[]);

int main(){
    int i = 0;
    char str[100];
    printf("Enter String = ");
    scanf("%s",str);
    checkDom(str);
}

void checkDom(char str[]){
    int i = 0; 
    while(str[i] != '\0'){
        if(str[i] == 'm' || str[i] == 'n'){ 
            printf("True\n");
        } else {  
            printf("False\n");
        }
        i++; 
    }
}