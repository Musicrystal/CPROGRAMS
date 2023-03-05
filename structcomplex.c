// create a structure to store complex numbers ;
#include<stdio.h>
#include<string.h>

struct complex{
    int img;
    int real;
};
int main()
{
    struct complex n1={4,5};
    struct complex *ptr=&n1;
    printf("real part=%d",ptr->real);
    printf("imag part=%d",ptr->img);
    return 0;
}
