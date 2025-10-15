//Write a program to swap two numbers using a third variable#include <stdio.h>

int main() {
    float a, b, temp;

    printf("Enter first number (a): ");
    scanf("%f", &a);

    printf("Enter second number (b): ");
    scanf("%f", &b);

    printf("\nBefore swapping:\na = %.2f\nb = %.2f\n", a, b);

    // Swapping using a third variable
    temp = a;
    a = b;
    b = temp;

    printf("\nAfter swapping:\na = %.2f\nb = %.2f\n", a, b);

    return 0;
}
