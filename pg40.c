// Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>
#include <string.h>

int main() {
    printf("Name: Souvik Saha\nCourse:BCA\nSap id:590026567\n");
    printf("-----------------------------------------------\n");
    char binary[50];
    int i;

    // Input binary number
    printf("Enter a binary number: ");
    scanf("%s", binary);

    // Calculate 1's complement
    for(i = 0; i < strlen(binary); i++) {
        if(binary[i] == '0')
            binary[i] = '1';
        else if(binary[i] == '1')
            binary[i] = '0';
        else {
            printf("Invalid binary digit entered!\n");
            return 0;
        }
    }

    // Display the result
    printf("1's Complement = %s\n", binary);

    return 0;
}
