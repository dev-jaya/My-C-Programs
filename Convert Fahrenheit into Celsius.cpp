#include <stdio.h>

int main()
{
    float fahren, cel;
    printf("Enter the Fahrenheit value: ");
    scanf("%f", &fahren);
    cel = (fahren-32) * (5.0/9.0);
    printf("The Celsius is %.2f", cel);
    return 0;
}
