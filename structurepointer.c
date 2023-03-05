#include<stdio.h>
#include<string.h>
struct student {
    int roll;
    char name[100];
    float cgpa;

};
int main()
{
    struct student s1={123,"mishra",9.9};
    printf("%s",s1.name);
    struct student *ptr=&s1;
    printf("student roll with ptr=%d\n",(*ptr).roll);
    printf("student roll-> with arrow operator=%d\n",ptr->roll);    //(->) arrow operator works same.
    return 0;
}