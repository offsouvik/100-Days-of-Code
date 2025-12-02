#include <stdio.h>

int main() {
    char str[1001];
    int i = 0;

    printf("Enter a string:\n");

    if (fgets(str, sizeof(str), stdin) != NULL) {
        
        while (str[i] != '\0' && str[i] != '\n') {
            
            if (str[i] == ' ') {
                str[i] = '-';
            }
            
            i++;
        }
        
        if (str[i] == '\n') {
            str[i] = '\0';
        }
        
        printf("The modified string is: %s\n", str);

    } else {
        fprintf(stderr, "Failed to read input.\n");
        return 1;
    }

    return 0;
}