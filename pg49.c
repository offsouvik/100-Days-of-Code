// Write a program to print the following pattern:
// 5
// 45
// 345
// 2345
// 12345
#include <stdio.h>

int main() {
    printf("Name: Souvik Saha\nCourse:BCA\nSap id:590026567\n");
    printf("-----------------------------------------------\n");
    int i, j, start;

    // Outer loop for rows
    for (i = 5; i >= 1; i--) {
        start = i; // Starting number for each row
        for (j = start; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
