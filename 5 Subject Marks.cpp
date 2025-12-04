#include <stdio.h>
#include <conio.h>

int main() {
    int phy, chem, bio, maths, eng, total;
    float avg, percentage;
    
    printf("Enter English marks: ");
    scanf("%d", &eng);
    
    printf("Enter Mathematics marks: ");
    scanf("%d", &maths);
    
    printf("Enter Physics marks: ");
    scanf("%d", &phy);
    
    printf("Enter Chemistry marks: ");
    scanf("%d", &chem);
    
    printf("Enter Biology marks: ");
    scanf("%d", &bio);
    
    total = eng + maths + phy + chem + bio;
    printf("Total is %d\n", total);
    
    avg = total / 5.0;
    printf("The average is %f\n", avg);
    
    percentage = (total / 500.0) * 100;
    printf("Percentage is %f", percentage);
    
    getch();
    return 0;
}
