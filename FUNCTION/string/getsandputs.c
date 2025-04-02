#include<stdio.h>

int main(){
char name[10];
gets(name);//input (it is unsafe to use) it has no maximum limit.
puts(name);//output
fgets(name,10,stdin);//input
puts(name);
    return 0;

}