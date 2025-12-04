#include <stdio.h>
#include <math.h>

int main()
{
    float p,r,t, amount, ci;
    printf("Enter principal value: ");
    scanf("%f", &p);
    printf("Enter rate of interest value: ");
    scanf("%f", &r);
    printf("Enter time value: ");
    scanf("%f", &t);
    amount = p*pow((1+r/100), t);
    ci = amount-p;
    printf("\nAmount is %f", amount);
    printf("\nCompound interest is %f", ci);
    return 0;
}
