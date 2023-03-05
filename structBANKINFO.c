//make a structure to store bank account information of a customer of abc bank ,also make an alias for it.
#include<stdio.h>
#include<string.h>
typedef struct bankaccount{
    int accountno;
    char name[100];
} acc;
int main()
{
    acc p1={1,"mohit"};
    acc p2={2,"mishra"};
    acc p3={3,"musicrystal"};
    printf("acc no:=%d\n",p1.accountno);
    printf("name=%s\n",p2.name);


    return 0;
}