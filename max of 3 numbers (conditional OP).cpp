#include <stdio.h>

int main()
{
    int a=5, b=4, c=2, max;
    max = (a>b) ? ((a>c) ? a : c) : ((b>c)? b : c);
    printf("The maximum is %d", max);
    return 0;
}
