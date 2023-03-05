// string using pointer
#include<stdio.h>

int main()
{
    char   *canchange="Hello world"; //can be reinitialized
    puts(canchange);
    canchange="musicrystal";
    puts(canchange);
    return 0;
}