#include<stdio.h>
int main()
{
    int n,r,temp,sum=0;
    printf("the number is :");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;

    }
    if(temp==sum)
    {
    printf("armstrong");

    }
    else
    printf("not");
}