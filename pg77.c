#include <stdio.h>

int main() {
    int r, c;
    int i, j;
    int is_distinct = 1;

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

    if (r != c) {
        fprintf(stderr, "Error: Matrix must be square to check the main diagonal.\n");
        printf("False\n");
        return 0;
    }

    int matrix[r][c];
    int diagonal[r];

    printf("Enter the %d elements of the matrix row by row:\n", r * c);
    
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if (scanf("%d", &matrix[i][j]) != 1) {
                fprintf(stderr, "Invalid input for matrix element.\n");
                return 1;
            }
            if (i == j) {
                diagonal[i] = matrix[i][j];
            }
        }
    }

    for (i = 0; i < r; i++) {
        for (j = i + 1; j < r; j++) {
            if (diagonal[i] == diagonal[j]) {
                is_distinct = 0;
                break;
            }
        }
        if (is_distinct == 0) {
            break;
        }
    }

    if (is_distinct == 1) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}