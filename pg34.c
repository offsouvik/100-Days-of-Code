// Write a program to check if a number is prime.
#include <stdio.h>

int main() {
    printf("Name: Souvik Saha\nCourse:BCA\nSap id:590026567\n");
    printf("-----------------------------------------------\n");
    int num, i, isPrime = 1; // Assume number is prime

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle special cases
    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
        return 0;
    }

    // Check divisibility from 2 to num/2
    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            isPrime = 0; // Not prime
            break;
        }
    }

    // Print result
    if (isPrime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}
