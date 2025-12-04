#include <stdio.h>
#include <math.h>

int main()
{
    int n, x1, i, j;
    float x, sign, sign1, cosx, fact, sinx;

    printf("Enter the number of the terms in a series\n");
    scanf("%d", &n);

    printf("Enter the value of x(in degrees)\n");
    scanf("%f", &x);

    x1 = x;
    x = x * (3.142 / 180.0);

    sinx = x;
    sign = -1;
    for (i = 3; i <= n; i = i + 2)
    {
        fact = 1;
        for (j = 1; j <= i; j++)
        {
            fact = fact * j;
        }
        sinx = sinx + (pow(x, i) / fact) * sign;
        sign = sign * (-1);
    }
    printf("Sum of the Sine series = %.2f\n", sinx);
    printf("The value of sin(%d) using library function = %.2f\n", x1, sin(x));

    cosx = 1;
    sign1 = -1;
    for (i = 2; i <= n; i = i + 2)
    {
        fact = 1;
        for (j = 1; j <= i; j++)
        {
            fact = fact * j;
        }
        cosx = cosx + (pow(x, i) / fact) * sign1;
        sign1 = sign1 * (-1);
    }
    printf("Sum of the cosine series = %.2f\n", cosx);
    printf("The value of cos(%d) using library function = %.2f\n", x1, cos(x));

    return 0;
}
