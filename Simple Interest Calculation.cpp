#include <stdio.h>

int main()
{
    int p,r,t;
    float si;
    printf("Enter the principal amount: ");
    scanf("%d", &p);
    printf("Enter the rate of interest: ");
    scanf("%d", &r);
    printf("Enter the number of months: ");
    scanf("%d", &t);
    si = (p*r*t)/100.0;
    printf("Simple interest is %f", si);
    return 0;
}
