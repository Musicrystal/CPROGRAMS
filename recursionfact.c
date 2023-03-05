#include<stdio.h>
int fact(int n);
int main()
{
    printf("factorial is %d",fact(5));
    return 0;

}
int fact(int n)
{
    if(n==0)
    { 
        return 1; 
    }
    int factN=fact(n-1);
    int factM=factN*n;
    return factM;  
      }

