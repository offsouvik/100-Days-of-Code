#include <stdio.h>

int main() {
    int r, c;
    int i, j, k;

    printf("Enter the number of rows:\n");
    if (scanf("%d", &r) != 1 || r <= 0) {
        fprintf(stderr, "Invalid input for rows.\n");
        return 1;
    }

    printf("Enter the number of columns:\n");
    if (scanf("%d", &c) != 1 || c <= 0) {
        fprintf(stderr, "Invalid input for columns.\n");
        return 1;
    }

    int matrix[r][c];

    printf("Enter the %d elements of the matrix row by row:\n", r * c);
    
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if (scanf("%d", &matrix[i][j]) != 1) {
                fprintf(stderr, "Invalid input for matrix element.\n");
                return 1;
            }
        }
    }

    printf("The diagonal traversal of the matrix is:\n");
    
    int max_sum = r + c - 2;

    for (k = 0; k <= max_sum; k++) {
        if (k % 2 == 0) {
            for (i = r - 1; i >= 0; i--) {
                j = k - i;
                if (j >= 0 && j < c) {
                    printf("%d ", matrix[i][j]);
                }
            }
        } else {
            for (i = 0; i < r; i++) {
                j = k - i;
                if (j >= 0 && j < c) {
                    printf("%d ", matrix[i][j]);
                }
            }
        }
    }
    printf("\n");

    return 0;
}