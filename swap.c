#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("enter the numbers:");
    scanf("%d%d",&a,&b);
    printf("after the swapping:");
    temp=a;
    a=b;
    b=temp;
    printf("the numbers are:%d\n%d",a,b);
    return 0;
}