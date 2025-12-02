// Write a program to check if a number is a strong number.
#include <stdio.h>

// Function to calculate factorial of a digit
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    printf("Name: Souvik Saha\nCourse:BCA\nSap id:590026567\n");
    printf("-----------------------------------------------\n");
    int num, temp, digit, sum = 0;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    // Find sum of factorials of digits
    while (temp > 0) {
        digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }

    // Check if number is strong
    if (sum == num)
        printf("%d is a Strong Number.\n", num);
    else
        printf("%d is NOT a Strong Number.\n", num);

    return 0;
}
