#include <stdio.h>
#define MAX_SIZE 10

int main()
{
    int i,j;
    int r1, c1, r2, c2;
    int A[MAX_SIZE][MAX_SIZE];
    int B[MAX_SIZE][MAX_SIZE];
    int C[MAX_SIZE][MAX_SIZE];

    printf("Enter rows and columns for the first matrix A: ");
    scanf("%d%d",&r1,&c1);

    printf("Enter rows and columns for the second matrix B: ");
    scanf("%d%d",&r2,&c2);
    if (r1 != r2 || c1 != c2)
    {
        printf("Error: Matrix addition is not possible.\n");
        printf("Rows and columns of both matrices must be equal.\n");
    }
    else
    {
        printf("\nEnter elements of the first matrix A:\n");
        for (i=0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                printf("Enter element A[%d][%d]: ",i,j);
                scanf("%d", &A[i][j]);
            }
        }

        printf("\nEnter elements of the second matrix B:\n");
        for (i=0; i < r2; i++)
        {
            for (j = 0; j < c2; j++)
            {
                printf("Enter element B[%d][%d]: ",i,j);
                scanf("%d", &B[i][j]);
            }
        }

                              /* Adding Matrices */
        for (i=0; i<r1; i++)
        {
            for (j=0; j<c1; j++)
            {
                C[i][j] = A[i][j] + B[i][j];
            }
        }

        printf("\nAddition of the two matrices:\n");
        for (i = 0; i < r1; i++)
        {
            for (j=0; j<c1; j++)
            {
                printf("%d\t", C[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
