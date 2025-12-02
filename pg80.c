#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    int i, j, k;

    printf("Enter the number of rows for the first matrix:\n");
    if (scanf("%d", &r1) != 1 || r1 <= 0) {
        fprintf(stderr, "Invalid input for rows.\n");
        return 1;
    }

    printf("Enter the number of columns for the first matrix:\n");
    if (scanf("%d", &c1) != 1 || c1 <= 0) {
        fprintf(stderr, "Invalid input for columns.\n");
        return 1;
    }

    int matrix1[r1][c1];
    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            if (scanf("%d", &matrix1[i][j]) != 1) {
                fprintf(stderr, "Invalid input for matrix element.\n");
                return 1;
            }
        }
    }

    printf("Enter the number of rows for the second matrix:\n");
    if (scanf("%d", &r2) != 1 || r2 <= 0) {
        fprintf(stderr, "Invalid input for rows.\n");
        return 1;
    }

    printf("Enter the number of columns for the second matrix:\n");
    if (scanf("%d", &c2) != 1 || c2 <= 0) {
        fprintf(stderr, "Invalid input for columns.\n");
        return 1;
    }

    if (c1 != r2) {
        fprintf(stderr, "Error: Matrix multiplication not possible.\n");
        fprintf(stderr, "Columns of first matrix (%d) must equal rows of second matrix (%d).\n", c1, r2);
        return 1;
    }

    int matrix2[r2][c2];
    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            if (scanf("%d", &matrix2[i][j]) != 1) {
                fprintf(stderr, "Invalid input for matrix element.\n");
                return 1;
            }
        }
    }

    long long result_matrix[r1][c2];

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            result_matrix[i][j] = 0;
            for (k = 0; k < c1; k++) {
                result_matrix[i][j] = result_matrix[i][j] + (long long)matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    printf("The product of the two matrices is:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%lld ", result_matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}