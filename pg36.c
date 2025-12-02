// Write a program to find the HCF (GCD) of two numbers.
#include <stdio.h>

int main() {
    printf("Name: Souvik Saha\nCourse:BCA\nSap id:590026567\n");
    printf("-----------------------------------------------\n");
    int num1, num2, i, hcf;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Find the smallest number
    int min = (num1 < num2) ? num1 : num2;

    // Find HCF by checking common divisors
    for(i = 1; i <= min; i++) {
        if(num1 % i == 0 && num2 % i == 0)
            hcf = i;
    }

    printf("HCF (GCD) of %d and %d = %d\n", num1, num2, hcf);

    return 0;
}
