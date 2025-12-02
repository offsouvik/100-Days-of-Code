#include <stdio.h>

int main() {
    int n;
    int k;
    int i;
    long long current_sum = 0;
    long long max_sum;

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

    printf("Enter the size of the subarray (k):\n");
    
    if (scanf("%d", &k) != 1 || k <= 0 || k > n) {
        fprintf(stderr, "Invalid input for k. Must be between 1 and %d.\n", n);
        return 1;
    }

    for (i = 0; i < k; i++) {
        current_sum = current_sum + arr[i];
    }
    
    max_sum = current_sum;

    for (i = k; i < n; i++) {
        current_sum = current_sum - arr[i - k] + arr[i];
        
        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }

    printf("The maximum sum of a subarray of size %d is:\n", k);
    printf("%lld\n", max_sum);

    return 0;
}