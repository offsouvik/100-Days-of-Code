// Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>

int main() {
    printf("Name: Souvik Saha\nCourse:BCA\nSap id:590026567\n");
    printf("-----------------------------------------------\n");
    int n, i;
    long long product = 1;  // Use long long for large results
    int count = 0;

    // Input the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate product of even numbers from 1 to n
    for(i = 1; i <= n; i++) {
        if(i % 2 == 0) {
            product *= i;
            count++;
        }
    }

    // Display the result
    if (count == 0)
        printf("No even numbers between 1 and %d.\n", n);
    else
        printf("Product of even numbers from 1 to %d = %lld\n", n, product);

    return 0;
}
