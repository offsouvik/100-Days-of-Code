#include <stdio.h>

int main() {
    int n;
    int i;
    int temp;
    int start;
    int end;

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

    start = 0;
    end = n - 1;

    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        start++;
        end--;
    }

    printf("The reversed array is:\n");
    
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}