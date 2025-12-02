// Write a program to print the following pattern:
// *****
//  ****
//   ***
//    **
//     *
#include <stdio.h>

int main() {
    printf("Name: Souvik Saha\nCourse:BCA\nSap id:590026567\n");
    printf("-----------------------------------------------\n");
    int i, j, space;

    // Outer loop for rows
    for (i = 5; i >= 1; i--) {
        // Print leading spaces
        for (space = 5; space > i; space--) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n"); // Move to next line
    }

    return 0;
}
