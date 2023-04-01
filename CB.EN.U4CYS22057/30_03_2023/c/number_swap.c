#include <stdio.h>

int main() {
    int a, b;

    // Getting the value of and variables
    printf("Enter the value of first variable: ");
    scanf("%d", &a);
    printf("Enter the value of second variable: ");
    scanf("%d", &b);
    printf("The numbers before swapping are %d and %d\n", a, b);

    // Swapping the variables
    a = a + b;
    b = a - b;
    a = a - b;

    // Final output
    printf("The numbers after swapping are %d and %d\n", a, b);
    return 0;
}
