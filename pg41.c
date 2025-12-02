// Write a program to swap the first and last digit of a number.Write a program to swap the first and last digit of a number.Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include <math.h>

int main() {
    printf("Name: Souvik Saha\nCourse:BCA\nSap id:590026567\n");
    printf("-----------------------------------------------\n");
    int num, first, last, digits, swapped;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle single-digit numbers
    if (num < 10 && num > -10) {
        printf("Swapped number = %d\n", num);
        return 0;
    }

    // Get the last digit
    last = num % 10;

    // Count number of digits
    digits = (int)log10(num);

    // Get the first digit
    first = num / pow(10, digits);

    // Swap first and last digits
    swapped = last * pow(10, digits) + (num % (int)pow(10, digits)) / 10 * 10 + first;

    printf("Swapped number = %d\n", swapped);

    return 0;
}
