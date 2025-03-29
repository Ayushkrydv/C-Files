#include<stdio.h>


struct student{
    char name[100];
    int rollno;
    float cgpa;
};

void printInfo(struct student s1);

int main(){
    struct student s1={"Ayush",18,9.0};
    printInfo(s1);
    return 0;
}

void printInfo(struct student s1){
    printf("Name = %s\n", s1.name);
    printf("Roll no = %d\n", s1.rollno);
    printf("CGPA = %f\n", s1.cgpa);
    
}