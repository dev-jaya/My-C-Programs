#include <stdio.h>

int main()
{
    int rows, i, j, space;

    printf("Enter the number of rows for the pyramid: ");
    scanf("%d", &rows);

    printf("The pyramid with %d rows:\n", rows);

    for (i = 1; i <= rows; i++)
    {
        for (space = 1; space <= rows - i; space++)
        {
            printf(" ");
        }
        for (j = i; j >= 1; j--)
        {
            printf("%d ", j);
        }
        for (j = 2; j <= i; j++)
        {   
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
