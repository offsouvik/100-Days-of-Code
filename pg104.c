#include <stdio.h>
#include <math.h>

int main() {
    int n;
    long long total_sum_double;
    long long x_squared;
    long long x;
    int pivot = -1;

    printf("Enter the value of n:\n");

    if (scanf("%d", &n) != 1 || n < 1) {
        fprintf(stderr, "Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    total_sum_double = (long long)n * (n + 1);

    if (total_sum_double % 2 != 0) {
        pivot = -1;
    } else {
        x_squared = total_sum_double / 2;
        
        x = (long long)sqrt((double)x_squared);

        if (x * x == x_squared) {
            pivot = (int)x;
        } else {
            pivot = -1;
        }
    }

    printf("The pivot integer is:\n");
    printf("%d\n", pivot);

    return 0;
}