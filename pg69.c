#include <stdio.h>

int main() {
    int n;
    int i;
    int largest, second_largest;

    printf("Enter the number of elements (must be at least 2):\n");

    if (scanf("%d", &n) != 1) {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    if (n < 2) {
        fprintf(stderr, "At least 2 elements are required.\n");
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

    if (arr[0] > arr[1]) {
        largest = arr[0];
        second_largest = arr[1];
    } else {
        largest = arr[1];
        second_largest = arr[0];
    }

    for (i = 2; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }

    printf("The second largest element is: %d\n", second_largest);

    return 0;
}