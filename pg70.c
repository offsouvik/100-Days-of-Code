#include <stdio.h>

void reverse_array(int arr[], int start, int end) {
    int temp;
    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
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

    printf("Enter the number of positions to rotate right:\n");
    
    if (scanf("%d", &k) != 1 || k < 0) {
        fprintf(stderr, "Invalid input for k.\n");
        return 1;
    }

    k = k % n;

    if (k > 0) {
        reverse_array(arr, n - k, n - 1);
        reverse_array(arr, 0, n - k - 1);
        reverse_array(arr, 0, n - 1);
    }

    printf("The rotated array is:\n");
    
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}