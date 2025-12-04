#include <stdio.h>

int main()
{
    int i,n,A[10],minimum, maximum;

    printf("Enter the size of array A\n");
    scanf("%d", &n);

    printf("Enter the elements into array A\n");
    for (i=0; i<n; i++)
    {
        scanf("%d", &A[i]);
    }

    minimum = A[0];
    for (i=1; i < n; i++) 
    {
        if(minimum > A[i])
            minimum = A[i];
    }
    printf("Minimum number of array A is %d\n", minimum);

    maximum = A[0];
    for (i=1; i < n; i++) 
    {
        if(maximum < A[i])
            maximum = A[i];
    }
    printf("Maximum number of array A is %d\n", maximum);

    return 0;
}
