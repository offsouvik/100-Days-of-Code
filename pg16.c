//Write a program to input three numbers and find the largest among them using if–else.
#include <stdio.h>

int main() {
    float a, b, c, largest;

    printf("Enter first number: ");
    scanf("%f", &a);
    printf("Enter second number: ");
    scanf("%f", &b);
    printf("Enter third number: ");
    scanf("%f", &c);

    if (a >= b && a >= c)
        largest = a;
    else if (b >= a && b >= c)
        largest = b;
    else
        largest = c;

    printf("The largest number is: %.2f\n", largest);

    return 0;
}
