//wap to store the data of 3  students.
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
    s1.cgpa=9.5;
    strcpy(s1.name,"musicrystal");
     printf("the name of student is:%s\n",s1.name);
     printf("the roll no of student is :%d\n",s1.rollno);
     printf("the cgpa of student is:%f\n",s1.cgpa);

     struct student s2;
     s2.rollno=123;
     s2.cgpa=9.6;
     strcpy(s2.name,"mohit");
     printf("name=%s\n",s2.name);
     printf("rollno is:%d\n",s2.rollno);
     printf("cgpa i s:%f\n",s2.cgpa);


     struct student s3;
     s3.rollno=12;
     s3.cgpa=9.7;
     strcpy(s3.name,"mishra");

     printf("name is:%s\n",s3.name);
     printf("rol no is:%d\n",s3.rollno);
     printf("cgpa is :%f\n",s3.cgpa);



    return 0;
}