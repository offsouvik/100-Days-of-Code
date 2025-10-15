//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include <stdio.h>

int main() {
    float a, b, c;

    printf("Enter side a: ");
    scanf("%f", &a);
    printf("Enter side b: ");
    scanf("%f", &b);
    printf("Enter side c: ");
    scanf("%f", &c);

    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c)
            printf("The triangle is Equilateral\n");
        else if (a == b || b == c || a == c)
            printf("The triangle is Isosceles\n");
        else
            printf("The triangle is Scalene\n");
    } else {
        printf("Invalid triangle! The sum of any two sides must be greater than the third side.\n");
    }

    return 0;
}
