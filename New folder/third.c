#include <stdio.h>

int main() {
    float units, billAmount = 0.0;

    
    printf("Enter the number of electricity units consumed: ");
    scanf("%f", &units);

    
    if (units <= 50) {
        billAmount = units * 0.50;
    } 
    else if (units <= 150) {
        billAmount = (50 * 0.50) + ((units - 50) * 0.75);
    } 
    else if (units <= 250) {
        billAmount = (50 * 0.50) + (100 * 0.75) + ((units - 150) * 1.20);
    } 
    else {
        billAmount = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((units - 250) * 1.50);
    }

    
    printf("The total electricity bill is: Rs. %.2f\n", billAmount);

    return 0;
}