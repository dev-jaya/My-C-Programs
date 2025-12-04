#include <stdio.h>

int main()
{
    int phy, chem, bio, maths, eng, total;
    float avg, percentage;

    printf("Enter English marks: ");
    scanf("%d", &eng);
    printf("Enter Mathematics marks: ");
    scanf("%d", &maths);
    printf("Enter physics marks: ");
    scanf("%d", &phy);
    printf("Enter chemistry marks: ");
    scanf("%d", &chem);
    printf("Enter biology marks: ");
    scanf("%d", &bio);

    total = eng+maths+phy+chem+bio;
    printf("\nTotal is %d", total);

    avg = (float)total / 5;
    printf("\nThe average is %f", avg);

    percentage = (float)total / 500 * 100;
    printf("\nPercentage is %f", percentage);

    return 0;
}
