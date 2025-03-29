#include<stdio.h>
#include<string.h>

typedef struct student{
    char name[100];
    int rollno;
    float cgpa;    
} stu;

int main(){

    stu s1 = {"ayush",18,9.5};
    printf("rollno = %d", s1.rollno);
    return 0;
}