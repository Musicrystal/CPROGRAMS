#include<stdio.h>
int  sum(int a ,int b); //declaration
int main()
{
    int a,b;
    printf("enter the numbers:\n");
    scanf("%d%d",&a,&b);
int s=sum(a, b);
printf("sum is%d",s); //call
return 0;
}
int sum(int a,int b) //definition
{
return a+b;
}