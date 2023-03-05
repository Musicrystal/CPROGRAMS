 #include<stdio.h>
 #include<string.h>
 struct student {
    int roll;
    char name[100];
    float cgpa;
 };
 void printinfo(struct student s1);
 int main()
 {
    struct student s1={123,"musicrystal",9.9};
   printinfo(s1);
    return 0;
 }
 void printinfo(struct student s1)

 {
    printf("student info given :");
     printf("student name=%s\n",s1.name);
      printf("student roll=%d\n",s1.roll);
       printf("student cgpa=%f\n",s1.cgpa);

 }