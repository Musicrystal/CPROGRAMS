// ask the user to enter their first name & print it back to them.
//also try with their full name.
#include<stdio.h>
int main()
{
 //char name[50];
//printf("enter the first name:");
//scanf("%s",name);
//printf("your name is %s",name);
char fullname[50];
printf("enter the full name:");
gets(fullname); // takes multiword scanf cant do this
puts(fullname);
 
return 0;

}