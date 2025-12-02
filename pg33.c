// Write a program to check if a number is an Armstrong number.
#include <stdio.h>
#include <math.h>

int main() {
    printf("Name: Souvik Saha\nCourse:BCA\nSap id:590026567\n");
    printf("-----------------------------------------------\n");
    int num, original, remainder, digits = 0;
    int result = 0;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    // Count number of digits
    while (original != 0) {
        original /= 10;
        digits++;
    }

    original = num;  // Reset original value

    // Calculate sum of digits raised to the power of 'digits'
    while (original != 0) {
        remainder = original % 10;
        result += pow(remainder, digits);
        original /= 10;
    }

    // Check if Armstrong number
    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
