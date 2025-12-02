#include <stdio.h>

int main() {
    int n;
    int i;
    int num;
    int repeated = -1;
    int seen[100001] = {0};

    printf("Enter the number of elements:\n");
    if (scanf("%d", &n) != 1 || n <= 0) {
        fprintf(stderr, "Invalid input. Please enter a positive number.\n");
        return 1;
    }

    printf("Enter %d elements separated by spaces:\n", n);
    
    for (i = 0; i < n; i++) {
        if (scanf("%d", &num) != 1) {
            fprintf(stderr, "Invalid input while reading array elements.\n");
            return 1;
        }

        if (num >= 0 && num < 100001) {
            if (seen[num] == 1) {
                repeated = num;
            } else {
                seen[num] = 1;
            }
        }
    }

    printf("The repeated element is:\n");
    printf("%d\n", repeated);

    return 0;
}