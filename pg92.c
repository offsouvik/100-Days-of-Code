#include <stdio.h>

int main() {
    char str[1001];
    int seen[26] = {0};
    int i = 0;
    char ch;
    char first_repeat = '\0';

    printf("Enter a string:\n");

    if (fgets(str, sizeof(str), stdin) != NULL) {
        
        while (str[i] != '\0' && str[i] != '\n') {
            
            ch = str[i];

            if (ch >= 'a' && ch <= 'z') {
                int index = ch - 'a';
                
                if (seen[index] == 1) {
                    first_repeat = ch;
                    break;
                } else {
                    seen[index] = 1;
                }
            }
            
            i++;
        }
        
        if (first_repeat != '\0') {
            printf("The first repeating lowercase alphabet is: %c\n", first_repeat);
        } else {
            printf("No repeating lowercase alphabet found.\n");
        }

    } else {
        fprintf(stderr, "Failed to read input.\n");
        return 1;
    }

    return 0;
}