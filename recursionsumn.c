#include<stdio.h>
int sum(int n);
int main()
{ 
    printf("sum of n is :%d",sum(5));
    return 0;

}
int sum(int n) //recursive function
{ 
    if(n==1)
    {
        return 1;
    }
    int sumN=sum(n-1);  //sum of 1 to n
    int sumM=sumN+n;
 } 
