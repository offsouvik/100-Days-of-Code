#include <stdio.h>

int main() {
    int n1, n2;
    int i;

    printf("Enter the number of elements for the first array:\n");
    if (scanf("%d", &n1) != 1 || n1 < 0) {
        fprintf(stderr, "Invalid input for first array size.\n");
        return 1;
    }

    int arr1[n1];
    if (n1 > 0) {
        printf("Enter %d elements for the first array:\n", n1);
        for (i = 0; i < n1; i++) {
            if (scanf("%d", &arr1[i]) != 1) {
                fprintf(stderr, "Invalid input while reading first array.\n");
                return 1;
            }
        }
    }

    printf("Enter the number of elements for the second array:\n");
    if (scanf("%d", &n2) != 1 || n2 < 0) {
        fprintf(stderr, "Invalid input for second array size.\n");
        return 1;
    }

    int arr2[n2];
    if (n2 > 0) {
        printf("Enter %d elements for the second array:\n", n2);
        for (i = 0; i < n2; i++) {
            if (scanf("%d", &arr2[i]) != 1) {
                fprintf(stderr, "Invalid input while reading second array.\n");
                return 1;
            }
        }
    }

    int n_merged = n1 + n2;
    int merged_arr[n_merged];

    for (i = 0; i < n1; i++) {
        merged_arr[i] = arr1[i];
    }

    for (i = 0; i < n2; i++) {
        merged_arr[n1 + i] = arr2[i];
    }

    printf("The merged array is:\n");
    for (i = 0; i < n_merged; i++) {
        printf("%d ", merged_arr[i]);
    }
    printf("\n");

    return 0;
}