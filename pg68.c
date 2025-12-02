#include <stdio.h>

int main() {
    int n;
    int i;
    int pos;

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

    printf("Enter the index (0-based) of the element to delete:\n");
    
    if (scanf("%d", &pos) != 1) {
        fprintf(stderr, "Invalid input for position.\n");
        return 1;
    }

    if (pos < 0 || pos >= n) {
        fprintf(stderr, "Invalid index. Index must be between 0 and %d.\n", n - 1);
        return 1;
    }

    for (i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    printf("The array after deletion is:\n");
    
    for (i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}