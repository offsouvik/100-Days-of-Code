#include <stdio.h>

long long max(long long a, long long b) {
    return (a > b) ? a : b;
}

int main() {
    int n;
    int i;
    long long max_so_far;
    long long current_max;

    printf("Enter the number of elements:\n");
    if (scanf("%d", &n) != 1 || n <= 0) {
        fprintf(stderr, "Invalid input. Please enter a positive number.\n");
        return 1;
    }

    int arr[n];

    printf("Enter %d elements separated by spaces:\n", n);
    
    for (i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            fprintf(stderr, "Invalid input while reading array elements.\n");
            return 1;
        }
    }

    max_so_far = arr[0];
    current_max = arr[0];

    for (i = 1; i < n; i++) {
        current_max = max((long long)arr[i], current_max + (long long)arr[i]);
        max_so_far = max(max_so_far, current_max);
    }

    printf("The maximum contiguous subarray sum is:\n");
    printf("%lld\n", max_so_far);

    return 0;
}
