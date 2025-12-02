#include <stdio.h>

int main() {
    int n;
    int i;
    long long sum = 0;

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

    for (i = 0; i < n; i++) {
        sum = sum + arr[i];
    }

    printf("The sum of the array elements is: %lld\n", sum);

    return 0;
}