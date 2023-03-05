 // wap to count the number of even numbers in an array.
   #include<stdio.h>
   int counteven(int arr[],int n);
    int main()
    {  
        int arr[]={1,2,3,4,5,6,7};
        printf("%d",counteven(arr,7));
        return 0;
    }
   int counteven(int arr[],int n)
   {
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0) //even
        count++;

    }
    return count;
   }