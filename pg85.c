#include <stdio.h>

int main() {
    char str[1001];
    int length = 0;
    int start, end;
    char temp;

    printf("Enter a string:\n");

    if (fgets(str, sizeof(str), stdin) != NULL) {
        
        while (str[length] != '\0' && str[length] != '\n') {
            length++;
        }
        
        str[length] = '\0';

        start = 0;
        end = length - 1;

        while (start < end) {
            temp = str[start];
            str[start] = str[end];
            str[end] = temp;
            
            start++;
            end--;
        }
        
        printf("The reversed string is: %s\n", str);

    } else {
        fprintf(stderr, "Failed to read input.\n");
        return 1;
    }

    return 0;
}