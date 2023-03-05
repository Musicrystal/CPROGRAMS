#include<stdio.h>
void printtable(int n); //declaration
int main()
{ 
    int n;
    printf("enter the number:");
    scanf("%d",&n);
printtable(n); //call
return 0;
}
void printtable(int n) //definition
{
    for(int i=1;i<=10;i++)
    {
        printf("%d\n",n*i);
    
    }

}