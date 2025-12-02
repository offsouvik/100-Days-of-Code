#include <stdio.h>

int main() {
    char str[1001];
    int i = 0;

    printf("Enter a string:\n");

    if (fgets(str, sizeof(str), stdin) != NULL) {
        
        while (str[i] != '\0' && str[i] != '\n') {
            
            if (str[i] >= 'a' && str[i] <= 'z') {
                str[i] = str[i] - 32;
            } else if (str[i] >= 'A' && str[i] <= 'Z') {
                str[i] = str[i] + 32;
            }
            
            i++;
        }
        
        if (str[i] == '\n') {
            str[i] = '\0';
        }
        
        printf("The toggled case string is: %s\n", str);

    } else {
        fprintf(stderr, "Failed to read input.\n");
        return 1;
    }

    return 0;
}