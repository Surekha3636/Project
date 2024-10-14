#include <stdio.h>

int main() {
    int decimal, binary = 0, remainder, base = 1;

    
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    if (decimal < 0) {
        printf("Please enter a non-negative integer.\n");
        return 1; 
    }

    
    while (decimal > 0) {
        remainder = decimal % 2; 
        binary = binary + remainder * base; 
        decimal = decimal / 2; 
        base = base * 10; 
    }

    
    printf("Binary equivalent: %d\n", binary);

    return 0; 
}