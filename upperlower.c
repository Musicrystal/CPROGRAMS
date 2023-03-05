#include<stdio.h>
int main()
{
    char ch;
    printf("enter the character:\n");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
    {
    printf("UPPER CASE\n");
    }
    else if (ch>='a' && ch<='z')
    {
        printf("lower case\n");
    }
    else
    printf("wrong choice\n");
    return 0;
    
}