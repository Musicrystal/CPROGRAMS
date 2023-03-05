#include<stdio.h>
#include<string.h>

struct student {
   int rollno;
   float cgpa;
   char name[100];
};
int main()
{
    struct student s1;
    s1.rollno=1234;
    s1.cgpa=9.8;
    //s1.name="MUSICRYSTAL";  not because array value in string so it need to copy the value 
    strcpy(s1.name,"musicrystal");
    printf("the name of student is:%s\n",s1.name);
    printf("the roll no of student is:%d\n",s1.rollno);
    printf("the cgpa of student is :%f\n",s1.cgpa);
    return 0;
}