#include<stdio.h>
void goodbye();
void printhello(); //declaration
int main()
{
goodbye();
printhello(); //call
return 0;
}
void goodbye()
{
    printf("goodbye musicrystal\n");
}
void printhello() //definition
{
    printf("hello musicrystal");
}