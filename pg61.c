#include <stdio.h>

int main() {
    int n;
    int i;
    int search_key;
    int found_index = -1;

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

    printf("Enter the element to search for:\n");

    if (scanf("%d", &search_key) != 1) {
        fprintf(stderr, "Invalid input for search key.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        if (arr[i] == search_key) {
            found_index = i;
            break;
        }
    }

    if (found_index != -1) {
        printf("Found at index %d\n", found_index);
    } else {
        printf("-1\n");
    }

    return 0;
}