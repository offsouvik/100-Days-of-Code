#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1001];
    char result_str[1001];
    int i = 0;
    int j = 0;
    char ch;

    printf("Enter a string:\n");

    if (fgets(str, sizeof(str), stdin) != NULL) {
        
        while (str[i] != '\0' && str[i] != '\n') {
            
            ch = tolower(str[i]);

            if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
                result_str[j] = str[i];
                j++;
            }
            
            i++;
        }
        
        result_str[j] = '\0';
        
        printf("The string without vowels is: %s\n", result_str);

    } else {
        fprintf(stderr, "Failed to read input.\n");
        return 1;
    }

    return 0;
}