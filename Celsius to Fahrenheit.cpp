#include <stdio.h>
#include <conio.h>

int main() {
    float fahren, cel;
    
    printf("Enter the Celsius value: ");
    scanf("%f", &cel);
    
    fahren = cel * (9.0 / 5.0) + 32;
    
    printf("The Fahren is %.2f", fahren);
    
    getch();
    return 0;
}
