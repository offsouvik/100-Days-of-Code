// Write a program to print all the prime numbers from 1 to n.
#include <stdio.h>

int main() {
    printf("Name: Souvik Saha\nCourse:BCA\nSap id:590026567\n");
    printf("-----------------------------------------------\n");
    int n, i, j, isPrime;

    // Input upper limit
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are:\n", n);

    // Loop through all numbers from 2 to n
    for (i = 2; i <= n; i++) {
        isPrime = 1; // assume i is prime

        // Check divisibility
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0; // not prime
                break;
            }
        }

        // If prime, print it
        if (isPrime == 1)
            printf("%d ", i);
    }

    printf("\n");
    return 0;
}
