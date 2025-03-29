#include<stdio.h>
#include<string.h>
int main(){
    char pass[10];
    fgets(pass,10,stdin);
    char salt[]="123";
    strcat(pass,salt);
    puts(pass);
    return 0;
}