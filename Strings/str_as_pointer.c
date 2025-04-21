#include<stdio.h>
#include<string.h>

int main(){
char str[] = "Ayush kumar";
// char *ptr = str;  // pointer now point to str[0]
// int i = 0;
// while(*ptr != '\0'){
//     printf("%c",*ptr);
//     ptr++;
//     i++; 
// }
str[0] = 'p';
     printf("%s",str);
    return 0;
}