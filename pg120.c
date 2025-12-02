#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1001];
    int i = 0;

    printf("Enter a string:\n");

    if (fgets(str, sizeof(str), stdin) != NULL) {
        
        for (i = 0; str[i] != '\0'; i++) {
            
            if (i == 0) {
                str[i] = toupper(str[i]);
            } else if (str[i - 1] == ' ') {
                str[i] = toupper(str[i]);
            }
        }

        printf("%s", str);

    } else {
        fprintf(stderr, "Failed to read input.\n");
        return 1;
    }

    return 0;
}