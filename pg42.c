// Write a program to check if a number is a perfect number.
#include <stdio.h>

int main() {
    printf("Name: Souvik Saha\nCourse:BCA\nSap id:590026567\n");
    printf("-----------------------------------------------\n");
    int num, i, sum = 0;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Find sum of proper divisors
    for (i = 1; i <= num / 2; i++) {
        if (num % i == 0)
            sum += i;
    }

    // Check for perfect number
    if (sum == num)
        printf("%d is a Perfect Number.\n", num);
    else
        printf("%d is NOT a Perfect Number.\n", num);

    return 0;
}
