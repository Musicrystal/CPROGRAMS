//check if a given character is present in a string or not.
#include<stdio.h>
void charcheck(char str[],char ch);
int main()
{
    char str[]="musicrystal";
    char ch='m';
    charcheck(str,ch);
    return 0;

}
void charcheck(char str[],char ch)
{
    for(int i=0;str[i] !='\0';i++)
    {
        if(str[i]==ch)
        {
            printf("the character is present");
            return ;
        }
        printf("character is not present");
    }
}