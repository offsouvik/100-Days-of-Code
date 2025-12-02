// Write a program to find the LCM of two numbers.
#include <stdio.h>

int main() {
    printf("Name: Souvik Saha\nCourse:BCA\nSap id:590026567\n");
    printf("-----------------------------------------------\n");
    int num1, num2, max;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Find the greater number
    max = (num1 > num2) ? num1 : num2;

    // Find LCM
    while (1) {
        if (max % num1 == 0 && max % num2 == 0) {
            printf("LCM of %d and %d = %d\n", num1, num2, max);
            break;
        }
        ++max;
    }

    return 0;
}
