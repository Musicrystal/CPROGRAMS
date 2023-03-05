#include<stdio.h>
struct student{
int rollno;
char name[100];
float cgpa;
};
int main()
{
    struct student s1={123,"mohit",9.8};
    printf("name:%s",s1.name);
    struct student s2={123,"mohi",9.8};
    struct student s3={123,"moh",9.8}; 
    return 0;

}