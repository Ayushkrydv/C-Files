#include<stdio.h>

int countLength(char arr[]);

int main(){
    
    char userName[20];
    fgets(userName,20,stdin); //input the string

    printf("length of string = %d",countLength(userName));
    return 0;
}

int countLength(char arr[]){
    int count=0;
for(int i=0; arr[i] != '\0'; i++ ){
  count++;
}
return count-1;
}

