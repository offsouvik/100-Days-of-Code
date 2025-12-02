// Write a program to print the following pattern:
//     5
//    45
//   345
//  2345
// 12345
#include <stdio.h>

int main() {
    printf("Name: Souvik Saha\nCourse:BCA\nSap id:590026567\n");
    printf("-----------------------------------------------\n");
    int i, j, space, start;

    // Outer loop for rows
    for (i = 5; i >= 1; i--) {
        // Print leading spaces
        for (space = 1; space < i; space++) {
            printf(" ");
        }

        // Print numbers
        for (j = i; j <= 5; j++) {
            printf("%d", j);
        }

        printf("\n"); // Move to next line after each row
    }

    return 0;
}
