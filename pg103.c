#include <stdio.h>

int main() {
    int n;
    int i;
    long long total_sum = 0;
    long long left_sum = 0;
    long long right_sum;
    int pivot_index = -1;

    printf("Enter the number of elements:\n");
    if (scanf("%d", &n) != 1 || n < 0) {
        fprintf(stderr, "Invalid input for number of elements.\n");
        return 1;
    }

    int nums[n];

    if (n > 0) {
        printf("Enter %d elements separated by spaces:\n", n);
        for (i = 0; i < n; i++) {
            if (scanf("%d", &nums[i]) != 1) {
                fprintf(stderr, "Invalid input for array element.\n");
                return 1;
            }
            total_sum = total_sum + nums[i];
        }
    }

    for (i = 0; i < n; i++) {
        
        right_sum = total_sum - left_sum - nums[i];
        
        if (left_sum == right_sum) {
            pivot_index = i;
            break;
        }
        
        left_sum = left_sum + nums[i];
    }

    printf("The pivot index is:\n");
    printf("%d\n", pivot_index);

    return 0;
}