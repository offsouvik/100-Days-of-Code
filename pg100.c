#include <stdio.h>

int main() {
    char str[1001];
    int len = 0;
    int i, j, k;
    int first_substring = 1;

    printf("Enter a string:\n");

    if (fgets(str, sizeof(str), stdin) != NULL) {
        
        while (str[len] != '\0' && str[len] != '\n') {
            len++;
        }
        str[len] = '\0';
        
        printf("All sub-strings are:\n");

        for (i = 0; i < len; i++) {
            for (j = i; j < len; j++) {
                
                if (first_substring == 1) {
                    first_substring = 0;
                } else {
                    printf(",");
                }

                for (k = i; k <= j; k++) {
                    printf("%c", str[k]);
                }
            }
        }
        printf("\n");

    } else {
        fprintf(stderr, "Failed to read input.\n");
        return 1;
    }

    return 0;
}