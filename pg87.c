#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1001];
    int i = 0;
    int space_count = 0;
    int digit_count = 0;
    int special_count = 0;
    char ch;

    printf("Enter a string:\n");

    if (fgets(str, sizeof(str), stdin) != NULL) {
        
        while (str[i] != '\0' && str[i] != '\n') {
            
            ch = str[i];

            if (isdigit(ch)) {
                digit_count++;
            } else if (ch == ' ') {
                space_count++;
            } else if (!isalpha(ch)) {
                special_count++;
            }
            
            i++;
        }
        
        printf("Spaces=%d, Digits=%d, Special=%d\n", space_count, digit_count, special_count);

    } else {
        fprintf(stderr, "Failed to read input.\n");
        return 1;
    }

    return 0;
}