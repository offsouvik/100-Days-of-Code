// Write a program to check if a number is a palindrome.
#include <stdio.h>

int main() {
    printf("Name: Souvik Saha\nCourse:BCA\nSap id:590026567\n");
    printf("-----------------------------------------------\n");
    int num, original, reversed = 0, remainder;

    // Input number from user
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;  // Store the original number

    // Reverse the number
    while(num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num = num / 10;
    }

    // Check if original and reversed numbers are equal
    if(original == reversed)
        printf("%d is a palindrome number.\n", original);
    else
        printf("%d is not a palindrome number.\n", original);

    return 0;
}
