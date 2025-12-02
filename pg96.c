#include <stdio.h>

void reverse_word(char str[], int start, int end) {
    char temp;
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char line[1001];
    int i = 0;
    int word_start = 0;

    printf("Enter a sentence:\n");

    if (fgets(line, sizeof(line), stdin) != NULL) {
        
        while (line[i] != '\0') {
            
            if (line[i] == ' ' || line[i] == '\n' || line[i] == '\0') {
                
                reverse_word(line, word_start, i - 1);
                
                word_start = i + 1;
                
                if (line[i] == '\n' || line[i] == '\0') {
                    break;
                }
            }
            
            i++;
        }
        
        if (line[i] == '\n') {
            line[i] = '\0';
        }

        printf("The modified sentence is: %s\n", line);

    } else {
        fprintf(stderr, "Failed to read input.\n");
        return 1;
    }

    return 0;
}