//WAP to allocate memory of size n ,by user.
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    int n;
    printf("enter the number :");
    scanf("%d",&n);
     ptr =(int *)calloc(n,sizeof(float ));

   
     for(int i=0;i<n;i++)
     {
        printf("%d\n",ptr[i]);
     }
     return 0;

}