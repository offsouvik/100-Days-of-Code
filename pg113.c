#include <stdio.h>

void bubble_sort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    int k;
    int i;

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

    printf("Enter the value of k:\n");
    
    if (scanf("%d", &k) != 1 || k <= 0 || k > n) {
        fprintf(stderr, "Invalid input for k. Must be between 1 and %d.\n", n);
        return 1;
    }

    bubble_sort(arr, n);

    printf("The %d-th smallest element is:\n", k);
    printf("%d\n", arr[k - 1]);

    return 0;
}