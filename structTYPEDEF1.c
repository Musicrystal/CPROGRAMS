// enter address (house no,block ,city ,state ) of 5people,
#include<stdio.h>
#include<string.h>
typedef struct address{
    int houseno;
    int block;
    char city[50];
    char state[50];
} addr ;
void printadd(struct address add);
int main()
{
    addr  person[5];
    //input 
    printf("enter info of person :1");
      scanf("%d\n",&person[0].houseno);
      scanf("%d\n",&person[0].block);
      scanf("%s\n",person[0].city);
      scanf("%s\n",person[0].state); 

      printf("enter info of person :2");
      scanf("%d\n",&person[0].houseno);
      scanf("%d\n",&person[0].block);
      scanf("%s\n",person[0].city);
      scanf("%s\n",person[0].state);  

      printf("enter info of person :3");
      scanf("%d\n",&person[0].houseno);
      scanf("%d\n",&person[0].block);
      scanf("%s\n",person[0].city);
      scanf("%s\n",person[0].state);   

      printf("enter info of person :4");
      scanf("%d\n",&person[0].houseno);
      scanf("%d\n",&person[0].block);
      scanf("%s\n",person[0].city);
      scanf("%s\n",person[0].state);   

      printf("enter info of person :5");
      scanf("%d\n",&person[0].houseno);
      scanf("%d\n",&person[0].block);
      scanf("%s\n",person[0].city);
      scanf("%s\n",person[0].state);  

                  printadd(person[0]);
                  printadd(person[0]);
                  printadd(person[0]);
                  printadd(person[0]);
                  printadd(person[0]);

}
void printadd(struct address add)
{
    printf("address is:%d,%d,%s,%s\n",add.houseno,add.block,add.city,add.state);
}
