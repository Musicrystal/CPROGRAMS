#include<stdio.h>
void printbonjour();
void printnamaste(); //declaration
int main()
{
    char ch;
    printf("press f for french I for indian");
    scanf("%c",&ch);
    if(ch=='i')
    {printnamaste();}
    else{
        printbonjour();
    }
 //call
return 0;
}
void printnamaste() //definition
{
    printf("namaste");
}
void printbonjour()
{
    printf("bonjour\n");
} 