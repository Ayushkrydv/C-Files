#include<stdio.h>-
#include<string.h>

int main(){

char str[12];
scanf("%s",str); // only first will be considered.
gets(str); // Entire Sentence can be input.
printf("Input = %s",str);
puts(str); // another way to output string.
//     int i = 0;
//     while(str[i]!='\0'){
//     printf("%c\n",str[i]);
//     i++;
// }

}