//print numbers 
#include<stdio.h>
void printnumbers(int arr[],int n);
int main()
{
    int arr[]={1,2,3,4,5,6};
    printnumbers(arr,6);
    return 0;
}
void printnumbers(int arr[],int n)
{
    for(int i=0;i<=5;i++)
    {
      printf("%d\t",arr[i]);
    }
    printf("\n");
}