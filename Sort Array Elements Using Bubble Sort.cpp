#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, j, i, swap;
    int *A;

    printf("Enter the size of array\n");
    scanf("%d", &n);

    A = (int*)malloc(n * sizeof(int));
    if (A == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }

    printf("Enter %d integers into array A\n", n);
    for (i=0; i<n; i++)
    {
        scanf("%d", &A[i]);
    }
    
    for (i=0; i<n-1; i++)
    {
        for (j=0; j<n-i-1; j++)
        {
            if (A[j] > A[j+1])
            {
                swap = A[j];
                A[j] = A[j+1];
                A[j+1] = swap;
            }
        }
    }

    printf("Sorted list in ascending order:\n");
    for (i=0; i < n; i++)
        printf("%d\n", A[i]);

    free(A); 
    return 0;
}
