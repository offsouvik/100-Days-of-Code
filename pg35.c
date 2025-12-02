// Write a program to print all factors of a given number.
#include <stdio.h>

int main() {
    printf("Name: Souvik Saha\nCourse:BCA\nSap id:590026567\n");
    printf("-----------------------------------------------\n");
    int num, i;

    // Input number from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check for valid input
    if (num <= 0) {
        printf("Please enter a positive number.\n");
        return 0;
    }

    // Print all factors
    printf("Factors of %d are: ", num);
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
