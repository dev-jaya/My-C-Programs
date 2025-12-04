#include <stdio.h> 
#include <stdlib.h>  
int main()  
{ 
    int n, i, sum = 0; 
    int *arr;   
    printf("Enter the number of elements in the array: "); 
    scanf("%d", &n); 
    arr = (int *)malloc(n * sizeof(int)); 
    if (arr == NULL)  
   { 
        printf("Memory allocation failed!\n"); 
   } 
    printf("Enter %d integer elements:\n", n); 
    for (i = 0; i < n; i++)  
    { 
        printf("Element %d: ", i + 1); 
        scanf("%d", &arr[i]); 
    } 
    for (i = 0; i < n; i++)  
    { 
        sum += arr[i];  
    } 
    printf("Sum of the array elements: %d\n", sum); 
    free(arr); 
    arr = NULL;  
    return 0;  
} 

