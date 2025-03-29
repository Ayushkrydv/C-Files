#include<stdio.h>

int main(){
    char firstName[]="Ayush";
    char lastName[]="kumar";
    
for(int i = 0; firstName[i] != '\0'; i++ ){
    printf("%c",firstName[i]);
}
printf("\n");
for(int i = 0; lastName[i] != '\0'; i++ ){
    printf("%c",lastName[i]);
}
    return 0;
}