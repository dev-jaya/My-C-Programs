#include <stdio.h>

int main()
{
    int A[10];
    int n, searchelement, i;
    int flag = 0; 

    printf("Enter the size of array A\n");
    scanf("%d", &n);

    printf("Enter the elements into array A\n");
    for (i=0; i<n; i++)
    {
        scanf("%d", &A[i]);
    }

    printf("Enter the element to search in the array A\n");
    scanf("%d", &searchelement);
    for (i=0; i<n; i++)
    {
        if (A[i] == searchelement)
        {
            printf("%d is present at position %d\n", searchelement, i);
            flag = 1; 
            break;    
        }
    }

    if (flag == 0)
    {
        printf("%d is not present in the array A\n", searchelement);
    }

    return 0;
}
