#include <stdio.h>

int main() {
    char str[1001];
    int length = 0;

    printf("Enter a string:\n");

    if (fgets(str, sizeof(str), stdin) != NULL) {
        
        while (str[length] != '\0' && str[length] != '\n') {
            length++;
        }
        
        printf("The length of the string is: %d\n", length);

    } else {
        fprintf(stderr, "Failed to read input.\n");
        return 1;
    }

    return 0;
}