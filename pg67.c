#include <stdio.h>

int main() {
    int n;
    int i;
    int pos;
    int value;

    printf("Enter the number of elements:\n");

    if (scanf("%d", &n) != 1 || n < 0) {
        fprintf(stderr, "Invalid input. Please enter a non-negative number.\n");
        return 1;
    }

    int arr[n + 1];

    if (n > 0) {
        printf("Enter %d elements separated by spaces:\n", n);
        
        for (i = 0; i < n; i++) {
            if (scanf("%d", &arr[i]) != 1) {
                fprintf(stderr, "Invalid input while reading array elements.\n");
                return 1;
            }
        }
    }

    printf("Enter the position (0-based) to insert at:\n");
    
    if (scanf("%d", &pos) != 1) {
        fprintf(stderr, "Invalid input for position.\n");
        return 1;
    }

    printf("Enter the element to insert:\n");
    
    if (scanf("%d", &value) != 1) {
        fprintf(stderr, "Invalid input for value.\n");
        return 1;
    }

    if (pos < 0 || pos > n) {
        fprintf(stderr, "Invalid position. Position must be between 0 and %d.\n", n);
        return 1;
    }

    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = value;

    printf("The array after insertion is:\n");
    
    for (i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}