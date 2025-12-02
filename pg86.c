#include <stdio.h>

int main() {
    char str[1001];
    int length = 0;
    int start, end;
    int is_palindrome = 1;

    printf("Enter a string:\n");

    if (fgets(str, sizeof(str), stdin) != NULL) {
        
        while (str[length] != '\0' && str[length] != '\n') {
            length++;
        }
        
        str[length] = '\0';

        start = 0;
        end = length - 1;

        while (start < end) {
            if (str[start] != str[end]) {
                is_palindrome = 0;
                break;
            }
            start++;
            end--;
        }
        
        if (is_palindrome == 1) {
            printf("The string is a Palindrome\n");
        } else {
            printf("The string is Not a palindrome\n");
        }

    } else {
        fprintf(stderr, "Failed to read input.\n");
        return 1;
    }

    return 0;
}