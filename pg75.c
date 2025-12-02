#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    int i, j;

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

    if (r1 != r2 || c1 != c2) {
        fprintf(stderr, "Error: Matrices must have the same dimensions to be added.\n");
        return 1;
    }

    int matrix2[r2][c2];
    int sum_matrix[r1][c1];

    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            if (scanf("%d", &matrix2[i][j]) != 1) {
                fprintf(stderr, "Invalid input for matrix element.\n");
                return 1;
            }
        }
    }

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            sum_matrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("The sum of the two matrices is:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            printf("%d ", sum_matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}