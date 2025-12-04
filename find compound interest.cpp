#include <stdio.h>
#include <math.h>  
#include <conio.h>

int main() {
    float p, r, t, amount, ci;
    
    printf("Enter principal value: ");
    scanf("%f", &p);
    
    printf("Enter rate of interest value: ");
    scanf("%f", &r);
    
    printf("Enter time value: ");
    scanf("%f", &t);
    
    amount = p * pow((1 + r / 100), t);
    ci = amount - p;
    
    printf("Amount is %f\n", amount);
    printf("Compound interest is %f", ci);
    
    getch();
    return 0;
}
