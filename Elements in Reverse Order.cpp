#include <stdio.h>

int main()
{
    int i,n,A[5];

    printf("Enter the size of array A (max 5)\n");
    scanf("%d", &n);

    printf("Enter the elements into array A\n");
    for (i=0; i<n; i++)
    {
        scanf("%d", &A[i]);
    }

    for (i = n-1; i >= 0; i--)
    {
        printf("Elements in reverse order at index %d: %d\n", i, A[i]);
    }

    return 0;
}
