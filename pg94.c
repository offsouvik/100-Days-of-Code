#include <stdio.h>
#include <string.h>

int main() {
    char line[1001];
    char longest_word[101];
    char current_word[101];
    int max_len = 0;
    int i = 0;
    int j = 0;

    printf("Enter a sentence:\n");

    if (fgets(line, sizeof(line), stdin) != NULL) {
        
        longest_word[0] = '\0';

        while (1) {
            char ch = line[i];

            if (ch == ' ' || ch == '\n' || ch == '\0') {
                
                current_word[j] = '\0';

                if (j > max_len) {
                    max_len = j;
                    
                    int k = 0;
                    while (current_word[k] != '\0') {
                        longest_word[k] = current_word[k];
                        k++;
                    }
                    longest_word[k] = '\0';
                }
                
                j = 0;

                if (ch == '\n' || ch == '\0') {
                    break;
                }
            } else {
                if (j < 100) {
                    current_word[j] = ch;
                    j++;
                }
            }
            
            i++;
        }

        printf("The longest word is: %s\n", longest_word);

    } else {
        fprintf(stderr, "Failed to read input.\n");
        return 1;
    }

    return 0;
}