#include <stdio.h>

int main() {
    int n;
    int k;
    int i, j;
    int first_negative;
    int found;

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

    printf("Enter the size of the window (k):\n");
    
    if (scanf("%d", &k) != 1 || k <= 0 || k > n) {
        fprintf(stderr, "Invalid input for k. Must be between 1 and %d.\n", n);
        return 1;
    }

    printf("The first negative integer in each window is:\n");
    
    for (i = 0; i <= n - k; i++) {
        
        found = 0;
        
        for (j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                first_negative = arr[j];
                found = 1;
                break;
            }
        }
        
        if (found == 1) {
            printf("%d ", first_negative);
        } else {
            printf("0 ");
        }
    }
    printf("\n");

    return 0;
}