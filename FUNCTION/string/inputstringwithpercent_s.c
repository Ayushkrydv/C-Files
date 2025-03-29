#include<stdio.h>

int main(){
int i = 0;
char str[100];
char ch;


while(ch !='\n'){
scanf("%c",&ch);
str[i]= ch;
i++;
}
str[i] = '\0';

puts(str);
return 0;
}