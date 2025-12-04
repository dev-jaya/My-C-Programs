#include <stdio.h>
#include <conio.h>

int main() {
    float b, h, area; 
    
    printf("Enter height value: ");
    scanf("%f", &h);
    
    printf("Enter base value: ");
    scanf("%f", &b);
    
    area = 0.5 * b * h;
    
    printf("The area of triangle is %f", area);
    
    getch();
    return 0;
}
