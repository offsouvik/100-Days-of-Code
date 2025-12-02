// Write a program to calculate the factorial of a number.
#include <stdio.h>

int main() {
    printf("Name: Souvik Saha\nCourse:BCA\nSap id:590026567\n");
    printf("-----------------------------------------------\n");
    int n, i;
    long long factorial = 1;  // Use long long to handle large results

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Check for negative input
    if (n < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    }
    else {
        // Calculate factorial using loop
        for(i = 1; i <= n; i++) {
            factorial *= i;
        }

        // Display the result
        printf("Factorial of %d = %lld\n", n, factorial);
    }

    return 0;
}
