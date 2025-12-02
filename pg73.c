#include <stdio.h>

int main() {
    int r, c;
    int i, j;

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
    long long row_sums[r];

    printf("Enter the %d elements of the matrix row by row:\n", r * c);
    
    for (i = 0; i < r; i++) {
        row_sums[i] = 0;
        for (j = 0; j < c; j++) {
            if (scanf("%d", &matrix[i][j]) != 1) {
                fprintf(stderr, "Invalid input for matrix element.\n");
                return 1;
            }
            row_sums[i] = row_sums[i] + matrix[i][j];
        }
    }

    printf("The sum of each row is:\n");
    
    for (i = 0; i < r; i++) {
        printf("%lld ", row_sums[i]);
    }
    printf("\n");

    return 0;
}