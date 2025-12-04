#include <stdio.h>

int main()
{
    int A[100];
    int i,j,k,size;

    printf("Enter the number of elements in the array A\n");
    scanf("%d", &size);

    printf("Enter %d elements into array A\n", size);
    for (i=0; i < size; i++)
    {
        scanf("%d", &A[i]);
    }
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (A[i] == A[j])
            {
                for (k = j; k < size - 1; k++)
                {
                    A[k] = A[k+1];
                }
                size--; 
                j--;    
            }
        }
    }

    printf("Elements in the array A after removing duplicates:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d\n", A[i]);
    }

    return 0;
}
