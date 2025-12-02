// Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include <stdio.h>

int main() {
    printf("Name: Souvik Saha\nCourse:BCA\nSap id:590026567\n");
    printf("-----------------------------------------------\n");
    int n, i;
    float sum = 0.0;
    int numerator = 2, denominator = 3;

    // Input number of terms
    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    // Calculate sum of the series
    for (i = 1; i <= n; i++) {
        sum += (float)numerator / denominator;
        numerator += 2;     // increase numerator by 2
        denominator += 4;   // increase denominator by 4
    }

    // Display result
    printf("Sum of the series up to %d terms = %.2f\n", n, sum);

    return 0;
}
