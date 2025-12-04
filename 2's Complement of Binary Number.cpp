#include <stdio.h>
#include <string.h>

#define SIZE 8

int main()
{
    int i, carry = 1;
    char num[SIZE + 1], one[SIZE + 1], two[SIZE + 1];

    printf("Enter the %d-bit binary number\n", SIZE);
    scanf("%s", num);
    for(i=0; i < SIZE; i++)
    {
        if(num[i] == '0')
        {
            one[i] = '1';
        }
        else if(num[i] == '1')
        {
            one[i] = '0';
        }
    }
    one[SIZE] = '\0';
    printf("Ones' complement is %s\n", one);

    for(i = SIZE - 1; i >= 0; i--)
    {
        if(one[i] == '1' && carry == 1)
        {
            two[i] = '0';
        }
        else if(one[i] == '0' && carry == 1)
        {
            two[i] = '1';
            carry = 0;
        }
        else
        {
            two[i] = one[i];
        }
    }
    two[SIZE] = '\0';

    printf("Two's complement is %s\n", two);

    return 0;
}
