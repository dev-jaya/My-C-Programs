#include <stdio.h>

int main()
{
    int a,b,c,sum = 0;
    float avg;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Enter the third number: ");
    scanf("%d", &c);
    sum = a+b+c;
    avg = (float)sum/3;
    printf("The sum is %d\n", sum);
    printf("The average is %f", avg);
    return 0;
}
