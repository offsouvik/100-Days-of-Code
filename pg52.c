// Write a program to print the following pattern:

// *

// *
// *
// *

// *
// *
// *
// *
// *

// *
// *
// *

// *
#include <stdio.h>

int main() {
    printf("Name: Souvik Saha\nCourse:BCA\nSap id:590026567\n");
    printf("-----------------------------------------------\n");
    int i, j;

    // 1 star
    printf("*\n\n");

    // 3 stars
    for (i = 1; i <= 3; i++) {
        printf("*\n");
    }
    printf("\n");

    // 5 stars
    for (i = 1; i <= 5; i++) {
        printf("*\n");
    }
    printf("\n");

    // 3 stars
    for (i = 1; i <= 3; i++) {
        printf("*\n");
    }
    printf("\n");

    // 1 star
    printf("*\n");

    return 0;
}
