#include <stdio.h>
#include <conio.h>
#include <string.h>

int main() {
    char customer_name[25];
    long customer_id, units_consumed;
    float bill_amount, surcharge, total_bill;
    
    printf("\nEnter Customer Name: ");
    fgets(customer_name, sizeof(customer_name), stdin);
    customer_name[strcspn(customer_name, "\n")] = 0;
    
    printf("\nEnter Customer ID: ");
    scanf("%ld", &customer_id);
    
    printf("\nEnter Units Consumed: ");
    scanf("%ld", &units_consumed);
    
    if (units_consumed <= 100) {
        bill_amount = units_consumed * 1.20;
    } else if (units_consumed <= 300) {
        bill_amount = (100 * 1.20) + ((units_consumed - 100) * 2.00);
    } else {
        bill_amount = (100 * 1.20) + (200 * 2.00) + ((units_consumed - 300) * 3.00);
    }
    
    surcharge = bill_amount * 0.10;
    total_bill = bill_amount + surcharge;
    
    printf("\n--- ELECTRICITY BILL ---\n");
    printf("Customer Name: %s\n", customer_name);
    printf("Customer ID: %ld\n", customer_id);
    printf("Units Consumed: %ld kWh\n", units_consumed);
    printf("Base Amount: $%.2f\n", bill_amount);
    printf("Surcharge (10%%): $%.2f\n", surcharge);
    printf("-------------------------\n");
    printf("Total Bill Amount: $%.2f\n", total_bill);
    printf("-------------------------\n");
    
    getch();
    return 0;
}
