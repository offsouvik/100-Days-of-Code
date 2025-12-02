// Write a program to find the sum of digits of a number.
#include <stdio.h>

int main() {
    printf("Name: Souvik Saha\nCourse:BCA\nSap id:590026567\n");
    printf("-----------------------------------------------\n");
    int num, sum = 0, remainder;

    // Input number from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Make sure the number is positive
    if (num < 0)
        num = -num;

    // Calculate sum of digits
    while (num != 0) {
        remainder = num % 10;   // Extract last digit
        sum += remainder;       // Add it to sum
        num /= 10;              // Remove last digit
    }

    // Display result
    printf("Sum of digits = %d\n", sum);

    return 0;
}
