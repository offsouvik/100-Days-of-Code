#include <stdio.h>

int main() {
    char s[1001], t[1001];
    int char_count[26] = {0};
    int i = 0;
    int len_s = 0;
    int len_t = 0;
    int is_anagram = 1;

    printf("Enter the first string (s):\n");
    
    if (fgets(s, sizeof(s), stdin) == NULL) {
        fprintf(stderr, "Failed to read first string.\n");
        return 1;
    }

    printf("Enter the second string (t):\n");
    
    if (fgets(t, sizeof(t), stdin) == NULL) {
        fprintf(stderr, "Failed to read second string.\n");
        return 1;
    }

    while (s[len_s] != '\0' && s[len_s] != '\n') {
        len_s++;
    }
    s[len_s] = '\0';

    while (t[len_t] != '\0' && t[len_t] != '\n') {
        len_t++;
    }
    t[len_t] = '\0';

    if (len_s != len_t) {
        is_anagram = 0;
    } else {
        for (i = 0; i < len_s; i++) {
            if (s[i] >= 'a' && s[i] <= 'z') {
                char_count[s[i] - 'a']++;
            }
        }

        for (i = 0; i < len_t; i++) {
            if (t[i] >= 'a' && t[i] <= 'z') {
                char_count[t[i] - 'a']--;
            }
        }

        for (i = 0; i < 26; i++) {
            if (char_count[i] != 0) {
                is_anagram = 0;
                break;
            }
        }
    }

    if (is_anagram == 1) {
        printf("Anagram\n");
    } else {
        printf("Not Anagram\n");
    }

    return 0;
}