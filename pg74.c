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

    printf("Enter the %d elements of the matrix row by row:\n", r * c);
    
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if (scanf("%d", &matrix[i][j]) != 1) {
                fprintf(stderr, "Invalid input for matrix element.\n");
                return 1;
            }
        }
    }

    int transpose[c][r];
    
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    printf("The transpose of the matrix is:\n");
    
    for (i = 0; i < c; i++) {
        for (j = 0; j < r; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}