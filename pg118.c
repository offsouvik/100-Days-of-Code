#include <stdio.h>

int main() {
    int n;
    int i;
    long long expected_sum;
    long long actual_sum = 0;
    int missing_number;

    printf("Enter the number of elements (n) in the input array:\n");
    if (scanf("%d", &n) != 1 || n < 0) {
        fprintf(stderr, "Invalid input for array size.\n");
        return 1;
    }

    int nums[n];

    printf("Enter %d distinct elements from 0 to %d:\n", n, n);
    
    for (i = 0; i < n; i++) {
        if (scanf("%d", &nums[i]) != 1) {
            fprintf(stderr, "Invalid input while reading array.\n");
            return 1;
        }
        actual_sum = actual_sum + nums[i];
    }

    expected_sum = (long long)n * (n + 1) / 2;

    missing_number = (int)(expected_sum - actual_sum);

    printf("The missing number is:\n");
    printf("%d\n", missing_number);

    return 0;
}