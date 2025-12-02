#include <stdio.h>

int main() {
    int r, c;
    int i, j;
    long long sum = 0;

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
        fprintf(stderr, "Error: Matrix must be square to find the main diagonal sum.\n");
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

    for (i = 0; i < r; i++) {
        sum = sum + matrix[i][i];
    }

    printf("The sum of the main diagonal elements is: %lld\n", sum);

    return 0;
}