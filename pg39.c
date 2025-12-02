// Write a program to find the product of odd digits of a number.
#include <stdio.h>

int main() {
    printf("Name: Souvik Saha\nCourse:BCA\nSap id:590026567\n");
    printf("-----------------------------------------------\n");
    int num, digit;
    int product = 1;
    int hasOdd = 0;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Make sure number is positive
    if (num < 0)
        num = -num;

    // Process each digit
    while (num != 0) {
        digit = num % 10;     // Extract last digit
        if (digit % 2 != 0) { // Check if odd
            product *= digit;
            hasOdd = 1;
        }
        num /= 10;            // Remove last digit
    }

    if (hasOdd)
        printf("Product of odd digits = %d\n", product);
    else
        printf("No odd digits in the number.\n");

    return 0;
}
