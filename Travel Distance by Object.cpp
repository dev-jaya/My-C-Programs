#include <stdio.h>
#include <math.h>

int main()
{
    float u, a, t, distance;
    printf(" Enter velocity value: ");
    scanf("%f", &u);
    printf(" Enter acceleration value: ");
    scanf("%f", &a);
    printf(" Enter time value: ");
    scanf("%f", &t);
    distance = u*t + 0.5 * a * pow(t,2);
    printf("\ndistance traveled by an object is %f\n", distance);
    return 0;
}
