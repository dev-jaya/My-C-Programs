#include <stdio.h>

int main()
{
    int a=1,b=2,c=3,d=4,e=5,f=6,g=7, z;
    int i=10;
    int x, temp;
    float y;
    x = a+b*c + (d*e) + f*g;
    printf("The value of x = %d\n", x);
    y=(float)a/b*c - b + (float)a*d/3;
    printf("The value of y is %f\n", y);
    z=a++ + b-- - a;
    printf("The value of z is %d\n", z);
    return 0;
}
