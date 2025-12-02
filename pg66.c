#include <stdio.h>

int main() {
    int n;
    int i;
    int num_to_insert;
    int insert_pos = 0;

    printf("Enter the number of elements:\n");

    if (scanf("%d", &n) != 1 || n < 0) {
        fprintf(stderr, "Invalid input. Please enter a non-negative number.\n");
        return 1;
    }

    int arr[n + 1];

    if (n > 0) {
        printf("Enter %d sorted elements separated by spaces:\n", n);
        
        for (i = 0; i < n; i++) {
            if (scanf("%d", &arr[i]) != 1) {
                fprintf(stderr, "Invalid input while reading array elements.\n");
                return 1;
            }
        }
    }

    printf("Enter the element to insert:\n");

    if (scanf("%d", &num_to_insert) != 1) {
        fprintf(stderr, "Invalid input for element to insert.\n");
        return 1;
    }

    while (insert_pos < n && arr[insert_pos] < num_to_insert) {
        insert_pos++;
    }

    for (i = n; i > insert_pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[insert_pos] = num_to_insert;

    printf("The array after insertion is:\n");
    
    for (i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}