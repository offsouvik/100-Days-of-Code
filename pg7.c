//Write a program to swap two numbers without using a third variable.
#include <stdio.h>

int main() {
    float a, b;

    printf("Enter first number (a): ");
    scanf("%f", &a);

    printf("Enter second number (b): ");
    scanf("%f", &b);

    printf("\nBefore swapping:\na = %.2f\nb = %.2f\n", a, b);

    // Swapping without using a third variable
    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nAfter swapping:\na = %.2f\nb = %.2f\n", a, b);

    return 0;
}
