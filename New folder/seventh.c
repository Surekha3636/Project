#include <stdio.h>

int main() {
    int x, y, a, b;

    printf("Enter the values for x and y (x < y): ");
    scanf("%d %d", &x, &y);
    printf("Enter the values for a and b: ");
    scanf("%d %d", &a, &b);

    if (x >= y) {
        printf("Invalid input! Please ensure that x is less than y.\n");
        return 1; 
    }

    
    printf("Numbers between %d and %d that are divisible by %d and %d:\n", x, y, a, b);
    
    for (int i = x; i <= y; i++) {
        if (i % a == 0 && i % b == 0) {
            printf("%d ", i);
        }
    }

    printf("\n"); 
    return 0; 
}