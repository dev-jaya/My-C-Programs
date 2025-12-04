#include <stdio.h>
#include <conio.h>

int main() {
    float a = 1.0, b = 2.0, c = 3.0, d = 4.0, e = 5.0, f = 6.0, g = 7.0;
    float x, y;
    int z_a = 1, z_b = 2, z; 
    int i = 5, temp; 
    
    // Expression 1
    x = a + b * c + (d * e) + f * g;
    printf("The value of x = %f\n", x);
    
    // Expression 2
    y = a / b * c - b + a * d / 3;
    printf("The value of y is %f\n", y);
    
    // Expression 3
    z = z_a++ + z_b-- - z_a;
    printf("The value of z is %d\n", z);
    
    // Expression 4
    temp = i++ + ++i;
    printf("Temp is %d\n", temp);
    
    getch();
    return 0;
}
