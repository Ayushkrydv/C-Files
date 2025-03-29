#include<stdio.h>
#include<string.h>


struct student{
    char name[100];
    int rollno;
    float cgpa;
};

int main() {
struct student s1 = {"Ayush",18,8.3};
printf("Roll no = %d\n", s1.rollno);

struct student *ptr = &s1;
printf("Roll no with *  = %d\n", (*ptr).rollno);

printf("Roll no with -> = %d", ptr->rollno);
}










