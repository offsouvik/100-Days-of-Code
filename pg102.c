#include <stdio.h>

int find_ceil_index(int arr[], int n, int x) {
    int low = 0;
    int high = n - 1;
    int mid;
    int ceil_index = -1;

    while (low <= high) {
        mid = low + (high - low) / 2;

        if (arr[mid] >= x) {
            ceil_index = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    
    return ceil_index;
}

int main() {
    int n;
    int i;
    int x;

    printf("Enter the number of elements:\n");
    if (scanf("%d", &n) != 1 || n < 0) {
        fprintf(stderr, "Invalid input for number of elements.\n");
        return 1;
    }

    int arr[n];

    if (n > 0) {
        printf("Enter %d sorted elements separated by spaces:\n", n);
        for (i = 0; i < n; i++) {
            if (scanf("%d", &arr[i]) != 1) {
                fprintf(stderr, "Invalid input for array element.\n");
                return 1;
            }
        }
    }

    printf("Enter the target element (x):\n");
    if (scanf("%d", &x) != 1) {
        fprintf(stderr, "Invalid input for target.\n");
        return 1;
    }

    int result_index = find_ceil_index(arr, n, x);

    printf("The ceil of %d is at index:\n", x);
    printf("%d\n", result_index);

    return 0;
}