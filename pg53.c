// Write a program to print the following pattern:
// *
// ***
// *****
// *******
// *********
// *******
// *****
// ***
// *
#include <stdio.h>

int main() {
    printf("Name: Souvik Saha\nCourse:BCA\nSap id:590026567\n");
    printf("-----------------------------------------------\n");
    int i, j, space;
    int n = 5; // height of the upper pyramid

    // Upper pyramid
    for (i = 1; i <= n; i++) {
        // Print leading spaces
        for (space = i; space < n; space++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower inverted pyramid
    for (i = n - 1; i >= 1; i--) {
        // Print leading spaces
        for (space = n; space > i; space--) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
