#include<stdio.h>
int main()
{
    int marks[3];
    printf("enter physics:");
    scanf("%d",&marks[0]);

     printf("enter chemistry:");
    scanf("%d",&marks[1]);

     printf("enter math:");
    scanf("%d",&marks[2]);

    printf("physics=%d, chemistry=%d,math=%d",marks[0],marks[1],marks[2]);
    return 0;
}