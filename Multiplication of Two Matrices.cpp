#include <stdio.h>
#define MAX_SIZE 10

int main()
{
    int r1, c1, r2, c2;
    int i, j, k;
    int A[MAX_SIZE][MAX_SIZE], B[MAX_SIZE][MAX_SIZE], C[MAX_SIZE][MAX_SIZE];

    printf("Enter rows and columns for the first matrix A: ");
    scanf("%d%d",&r1,&c1);

    printf("Enter rows and columns for the second matrix B: ");
    scanf("%d%d",&r2,&c2);

    if (c1 != r2)
    {
        printf("Error: Matrix multiplication is not possible.\n");
        printf("Cols of A must equal Rows of B.\n");
    }
    else
    {
        printf("\nEnter elements of the first matrix A:\n");
        for (i=0; i<r1; i++)
        {
            for (j=0; j < c1; j++)
            {
                printf("Enter element A[%d][%d]: ",i,j);
                scanf("%d", &A[i][j]);
            }
        }

        printf("\nEnter elements of the second matrix B:\n");
        for (i=0; i < r2; i++)
        {
            for (j=0; j < c2; j++)
            {
                printf("Enter element B[%d][%d]: ",i,j);
                scanf("%d", &B[i][j]);
            }
        }

        /* Multiplying Matrices */
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                C[i][j] = 0;
                for (k = 0; k < c1; k++)
                {
                    C[i][j] = C[i][j] + A[i][k] * B[k][j];
                }
            }
        }

        printf("\nMultiplication of the two matrices:\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                printf("%d\t",C[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
