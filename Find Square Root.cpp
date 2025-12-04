#include <stdio.h>
#include <math.h>  
#include <conio.h>

int main() {
    double x, res; 
    
    printf("Enter x value: ");
    scanf("%lf", &x);
    
    res = sqrt(x);
    
    printf("The square root is %lf", res);
    
    getch();
    return 0;
}
