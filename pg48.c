// Write a program to print the following pattern:
// 1
// 12
// 123
// 1234
// 12345
#include <stdio.h>

int main() {
    printf("Name: Souvik Saha\nCourse:BCA\nSap id:590026567\n");
    printf("-----------------------------------------------\n");
    int i, j;

    // Outer loop for rows
    for (i = 1; i <= 5; i++) {
        // Inner loop for printing numbers
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n"); // Move to next line after each row
    }

    return 0;
}
