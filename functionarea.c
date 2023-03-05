#include<stdio.h>
float circlearea(float rad);
float rectanglearea(float a,float b);
float squarearea(float side);
int main()
{
    float rad,a,b,side;
    printf("enter the value\n");
    scanf("%f%f%f%f",&rad,&a,&b,&side);
    printf("the area is :%f\n",rectanglearea(a,b));
    printf("the area is :%f\n",circlearea(rad));
    printf("the area is :%f\n",circlearea(side));
  return 0;  
}
float circlearea(float rad)
{
    return 3.14*rad*rad;

}
float rectanglearea(float a,float b)
{
return  a*b;
}
float squarearea(float side)
{
return side*side;
}