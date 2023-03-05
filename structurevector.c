// create a structure to store vectors.then make a fun to return sum of 2 vectors.
#include<stdio.h>
#include<string.h>
 struct vector{
    int x;
    int y;
};
void store(struct vector v1,struct vector v2,struct vector sum);
int main()
{
     
    struct vector v1={5,19};
    struct vector v2={4,6};
    struct vector sum={0};
     
     store(v1,v2,sum);

    return 0;
}
void store(struct vector v1,struct vector v2,struct vector sum)
{
    sum.x=v1.x+v2.x;
    sum.y=v1.y+v2.y;
    printf("sum of x is:%d",sum.x);
    printf("sum of y is :%d",sum.y);
}