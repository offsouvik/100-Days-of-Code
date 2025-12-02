// Write a program to print the sum of the first n odd numbers.
#include <stdio.h>

int main() {
    printf("Name: Souvik Saha\nCourse:BCA\nSap id:590026567\n");
    printf("-----------------------------------------------\n");
    int n, i, sum = 0;

    // Input the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate sum of first n odd numbers
    for(i = 1; i <= n; i++) {
        sum += (2 * i - 1);  // odd number formula
    }

    // Display the result
    printf("Sum of the first %d odd numbers = %d\n", n, sum);

    return 0;
}
