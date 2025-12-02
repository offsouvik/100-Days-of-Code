#include <stdio.h>

int main() {
    char str[1001];
    char search_char;
    int i = 0;
    int count = 0;

    printf("Enter a string:\n");

    if (fgets(str, sizeof(str), stdin) == NULL) {
        fprintf(stderr, "Failed to read string.\n");
        return 1;
    }

    printf("Enter the character to find:\n");
    
    if (scanf(" %c", &search_char) != 1) {
        fprintf(stderr, "Failed to read character.\n");
        return 1;
    }

    while (str[i] != '\0' && str[i] != '\n') {
        
        if (str[i] == search_char) {
            count++;
        }
        
        i++;
    }
    
    printf("The frequency of '%c' is: %d\n", search_char, count);

    return 0;
}