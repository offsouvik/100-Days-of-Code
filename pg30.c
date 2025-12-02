// Write a program to reverse a given number.
#include <stdio.h>

int main() {
    printf("Name: Souvik Saha\nCourse:BCA\nSap id:590026567\n");
    printf("-----------------------------------------------\n");
    int num, reversed = 0, remainder;

    // Input number from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Reverse the number
    while(num != 0) {
        remainder = num % 10;          // Get the last digit
        reversed = reversed * 10 + remainder; // Append it
        num = num / 10;                // Remove last digit
    }

    // Display the reversed number
    printf("Reversed number = %d\n", reversed);

    return 0;
}
