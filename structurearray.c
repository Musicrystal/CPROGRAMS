 #include<stdio.h>
 #include<string.h>
 struct student{
    int rollno;
    char name[100];
    float cgpa;
 };
 int main()
 {
    struct student lbs[100] ;
    lbs[0].rollno=123;
    lbs[0].cgpa=9.8;
    strcpy(lbs[0].name,"mohit");
    printf("name=%s\n",lbs[0].name);
     printf("rollnnumber=%d\n",lbs[0].rollno);
      printf("cgpa=%f\n",lbs[0].cgpa);
      return 0;



 }