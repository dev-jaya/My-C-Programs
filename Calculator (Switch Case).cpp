#include <stdio.h>
#include <conio.h>

int main() {
    char operator;
    double num1, num2, result;
    
    printf("Enter an operator (+, -, *, /): \n");
    scanf(" %c", &operator); 
    
    printf("Enter two numbers: \n");
    scanf("%lf %lf", &num1, &num2);
    
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("num1=%.2lf num2=%.2lf result = %.2lf\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("num1=%.2lf num2=%.2lf result = %.2lf\n", num1, num2, result);
            break;
        
        case '*': 
            result = num1 * num2;
            printf("num1=%.2lf num2=%.2lf result = %.2lf\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("num1=%.2lf num2=%.2lf result = %.2lf\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            break;
    }
    
    getch();
    return 0;
}
