#include <stdio.h>

int main() {
    char str[1001];
    int i;

    printf("Enter a string:\n");

    if (fgets(str, sizeof(str), stdin) != NULL) {
        
        printf("The characters are:\n");
        
        for (i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
            printf("%c\n", str[i]);
        }

    } else {
        fprintf(stderr, "Failed to read input.\n");
        return 1;
    }

    return 0;
}