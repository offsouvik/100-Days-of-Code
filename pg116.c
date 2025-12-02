#include <stdio.h>

int main() {
    int n;
    int i, j;
    int target;
    int index1 = -1;
    int index2 = -1;
    int found = 0;

    printf("Enter the number of elements:\n");
    if (scanf("%d", &n) != 1 || n < 2) {
        fprintf(stderr, "Invalid input. Need at least 2 numbers.\n");
        return 1;
    }

    int nums[n];

    printf("Enter %d elements separated by spaces:\n", n);
    
    for (i = 0; i < n; i++) {
        if (scanf("%d", &nums[i]) != 1) {
            fprintf(stderr, "Invalid input while reading array elements.\n");
            return 1;
        }
    }

    printf("Enter the target sum:\n");
    
    if (scanf("%d", &target) != 1) {
        fprintf(stderr, "Invalid input for target.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                index1 = i;
                index2 = j;
                found = 1;
                break;
            }
        }
        if (found == 1) {
            break;
        }
    }

    printf("The two indices are:\n");
    printf("%d %d\n", index1, index2);

    return 0;
}