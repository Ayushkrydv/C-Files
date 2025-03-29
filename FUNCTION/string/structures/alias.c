#include<stdio.h>


typedef struct accountdetail{
    int accNo;
    char name[100];
} acc;

int main() {
acc acc1 = {123,"ayush"};
acc acc2 = {124,"agr"};

printf("%d\n",acc1.accNo);
printf("%s",acc1.name);
}

