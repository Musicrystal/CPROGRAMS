#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    int root1,root2,realpart,imaginarypart;
    printf("enter coefficients(a,b,c):");
    scanf("%d%d%d",&a,&b,&c);
    printf("the quadratic equation: %dx*x%+dx%+d\n",a,b,c);
    d=(b*b)-4*a*c;
    if(d>1)
    {
        root1=(-b+sqrt(d))/2*a;
        root2=(-b-sqrt(d))/2*a;
        printf("roots are %d and %d\n",root1,root2);
        }
        else if(d==0)
        {
            root1=root2=-b/2*a;
            printf("roots are %d and %d\n",root1,root2);
     
        }
        else 
        {
            realpart=-b/2*a;
            imaginarypart=sqrt(d)/2*a;
            printf("root1=%d + i(%d)\n",realpart,imaginarypart);
            printf("root1=%d - i(%d)\n",realpart,imaginarypart);
        }
        return 0;

}