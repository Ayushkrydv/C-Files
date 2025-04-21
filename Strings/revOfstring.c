#include<stdio.h>

int main(){
    char str[100];
    puts("Enter String : ");
    gets(str);
    int i = 0;
    int size = 0;
    puts("size : ");
    while(str[i]!='\0'){
        size++;
        i++;
    }
    printf("%d\n",size);
    puts("Reverse String : ");
    for(int k = 0 ,j = size-1; k<=j; k++, j--){
        
        char temp;
        temp = str[k];
        str[k] = str[j];
        str[j] = temp;
    }
    puts(str);
    return 0;
}