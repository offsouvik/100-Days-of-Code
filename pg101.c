#include <stdio.h>

int find_first_occurrence(int arr[], int n, int target) {
    int low = 0;
    int high = n - 1;
    int result = -1;
    int mid;

    while (low <= high) {
        mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            result = mid;
            high = mid - 1;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}

int find_last_occurrence(int arr[], int n, int target) {
    int low = 0;
    int high = n - 1;
    int result = -1;
    int mid;

    while (low <= high) {
        mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            result = mid;
            low = mid + 1;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}

int main() {
    int n;
    int i;
    int target;

    printf("Enter the number of elements:\n");
    if (scanf("%d", &n) != 1 || n < 0) {
        fprintf(stderr, "Invalid input for number of elements.\n");
        return 1;
    }

    int nums[n];

    if (n > 0) {
        printf("Enter %d sorted elements separated by spaces:\n", n);
        for (i = 0; i < n; i++) {
            if (scanf("%d", &nums[i]) != 1) {
                fprintf(stderr, "Invalid input for array element.\n");
                return 1;
            }
        }
    }

    printf("Enter the target element:\n");
    if (scanf("%d", &target) != 1) {
        fprintf(stderr, "Invalid input for target.\n");
        return 1;
    }

    int first_index = find_first_occurrence(nums, n, target);
    int last_index = find_last_occurrence(nums, n, target);

    printf("The first and last occurrences are at index:\n");
    printf("%d,%d\n", first_index, last_index);

    return 0;
}