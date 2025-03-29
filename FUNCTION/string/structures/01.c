#include<stdio.h>
#include<string.h>

struct student{
    char name[100];
    int rollno;
    float cgpa;
};

int main() {

    struct student s1;
    struct student s2;
    struct student s3;
    struct student s4;
    struct student iot[62]; // array of structures
    struct student s5 = {"Sunny kumar",20,7.33};
   
    printf("Name = %s\n",s5.name);
    printf("rollno = %d\n",s5.rollno);
    printf("CGPA = %f\n",s5.cgpa);
    printf("\n");f

    iot[0].rollno = 1;
    iot[0].cgpa = 9.0;
    strcpy(iot[0].name , "prince" );

    s1.rollno = 18;
    s1.cgpa = 7.89;
    strcpy(s1.name, "Ayush kumar");

    s2.rollno = 17;
    s2.cgpa = 7.79;
    strcpy(s2.name, "Amrit kumar");

    s3.rollno = 19;
    s3.cgpa = 7.69;
    strcpy(s3.name, "Sukesh kumar");

    s4.rollno = 16;
    s4.cgpa = 8.5;
    strcpy(s4.name, "Sumit kumar");

    printf("Name = %s\n", iot[0].name);
    printf("Roll no = %d\n", iot[0].rollno);
    printf("CGPA = %f\n", iot[0].cgpa);
    printf("\n");


    printf("Name = %s\n", s1.name);
    printf("Roll no = %d\n", s1.rollno);
    printf("CGPA = %f\n", s1.cgpa);
    printf("\n");

    printf("Name = %s\n", s2.name);
    printf("Roll no = %d\n", s2.rollno);
    printf("CGPA = %f\n", s2.cgpa);
    printf("\n");

    printf("Name = %s\n", s3.name);
    printf("Roll no = %d\n", s3.rollno);
    printf("CGPA = %f\n", s3.cgpa);
    printf("\n");

    printf("Name = %s\n", s4.name);
    printf("Roll no = %d\n", s4.rollno);
    printf("CGPA = %f\n", s4.cgpa);
}











