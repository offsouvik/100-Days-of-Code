#include <stdio.h>

int main() {
    int m, n;
    int i, j, k;

    printf("Enter the number of elements in the first sorted array:\n");
    if (scanf("%d", &m) != 1 || m < 0) {
        fprintf(stderr, "Invalid input for first array size.\n");
        return 1;
    }

    int nums1[m];
    if (m > 0) {
        printf("Enter %d sorted elements for the first array:\n", m);
        for (i = 0; i < m; i++) {
            if (scanf("%d", &nums1[i]) != 1) {
                fprintf(stderr, "Invalid input while reading first array.\n");
                return 1;
            }
        }
    }

    printf("Enter the number of elements in the second sorted array:\n");
    if (scanf("%d", &n) != 1 || n < 0) {
        fprintf(stderr, "Invalid input for second array size.\n");
        return 1;
    }

    int nums2[n];
    if (n > 0) {
        printf("Enter %d sorted elements for the second array:\n", n);
        for (i = 0; i < n; i++) {
            if (scanf("%d", &nums2[i]) != 1) {
                fprintf(stderr, "Invalid input while reading second array.\n");
                return 1;
            }
        }
    }

    int merged[m + n];
    
    i = 0;
    j = 0;
    k = 0;

    while (i < m && j < n) {
        if (nums1[i] <= nums2[j]) {
            merged[k] = nums1[i];
            i++;
        } else {
            merged[k] = nums2[j];
            j++;
        }
        k++;
    }

    while (i < m) {
        merged[k] = nums1[i];
        i++;
        k++;
    }

    while (j < n) {
        merged[k] = nums2[j];
        j++;
        k++;
    }

    printf("The merged sorted array is:\n");
    for (i = 0; i < (m + n); i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}