#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1001];
    int i = 0;
    int vowel_count = 0;
    int consonant_count = 0;
    char ch;

    printf("Enter a string:\n");

    if (fgets(str, sizeof(str), stdin) != NULL) {
        
        while (str[i] != '\0' && str[i] != '\n') {
            
            ch = tolower(str[i]);

            if (isalpha(ch)) {
                if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                    vowel_count++;
                } else {
                    consonant_count++;
                }
            }
            
            i++;
        }
        
        printf("Vowels=%d, Consonants=%d\n", vowel_count, consonant_count);

    } else {
        fprintf(stderr, "Failed to read input.\n");
        return 1;
    }

    return 0;
}