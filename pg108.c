#include <stdio.h>

int main() {
    int n;
    int i;
    int right_product;

    printf("Enter the number of elements:\n");
    if (scanf("%d", &n) != 1 || n <= 0) {
        fprintf(stderr, "Invalid input. Please enter a positive number.\n");
        return 1;
    }

    int nums[n];
    int answer[n];

    printf("Enter %d elements separated by spaces:\n", n);
    
    for (i = 0; i < n; i++) {
        if (scanf("%d", &nums[i]) != 1) {
            fprintf(stderr, "Invalid input while reading array elements.\n");
            return 1;
        }
    }

    answer[0] = 1;
    for (i = 1; i < n; i++) {
        answer[i] = nums[i - 1] * answer[i - 1];
    }

    right_product = 1;
    for (i = n - 1; i >= 0; i--) {
        answer[i] = answer[i] * right_product;
        right_product = right_product * nums[i];
    }

    printf("The resulting array is:\n");
    printf("[");
    for (i = 0; i < n; i++) {
        printf("%d", answer[i]);
        if (i < n - 1) {
            printf(",");
        }
    }
    printf("]\n");

    return 0;
}