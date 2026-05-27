#include <stdio.h>
#include <stdlib.h>

#define N 5

int stack[N];
int top = -1;

int main()
{
    int choice, val;

    while (1)
    {
        printf("\n===== STACK MENU =====\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter an integer.\n");
            // Clear input buffer
            int c;
            while ((c = getchar()) != '\n' && c != EOF);
            continue;
        }

        switch (choice)
        {
        case 1: // 🔹 Push
            if (top == N - 1)
            {
                printf("Stack Overflow\n");
            }
            else
            {
                printf("Enter element: ");
                scanf("%d", &val);
                top++;
                stack[top] = val;
            }
            break;

        case 2: // 🔹 Pop
            if (top == -1)
            {
                printf("Stack Underflow\n");
            }
            else
            {
                printf("Popped element: %d\n", stack[top]);
                top--;
            }
            break;

        case 3: // 🔹 Peek
            if (top == -1)
            {
                printf("Stack is empty\n");
            }
            else
            {
                printf("Top element: %d\n", stack[top]);
            }
            break;

        case 4: // 🔹 Display
            if (top == -1)
            {
                printf("Stack is empty\n");
            }
            else
            {
                int i;
                printf("Stack elements:\n");
                for (i = top; i >= 0; i--)
                {
                    printf("%d\n", stack[i]);
                }
            }
            break;

        case 5: // 🔹 Exit
            printf("Exiting program...\n");
            return 0;

        default:
            printf("Invalid choice\n");
        }
    }
}