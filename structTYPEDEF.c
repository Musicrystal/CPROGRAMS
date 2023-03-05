//used to create alias(nickname) for datatype
#include<stdio.h>
#include<string.h>
typedef struct student {
    int roll;
    char name[50];
    float cgpa;
} stu ;
int main()
{
    stu s1={123,"crystal",9.9};
    printf("name=%s",s1.name);


    return 0;

}