#include <stdio.h>
#include <string.h>

int main()
{
    char string1[20], string2[20], temp;
    int i, length;

    printf("Enter string: ");
    fgets(string1, 20, stdin);
    string1[strcspn(string1, "\n")] = 0;
    strcpy(string2, string1);

    length = strlen(string2) - 1;
    for(i=0; i < (length+1)/2; i++)
    {
        temp = string2[i];
        string2[i] = string2[length-i];
        string2[length-i] = temp;
    }

    printf("Original string: %s\n", string1);
    printf("Reversed string (manual): %s\n", string2);

    return 0;
}
