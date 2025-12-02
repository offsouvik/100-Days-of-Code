#include <stdio.h>

int main() {
    char str1[1001], str2[1001];
    int char_count[26] = {0};
    int i = 0;
    int len1 = 0;
    int len2 = 0;
    int is_anagram = 1;

    printf("Enter the first string:\n");
    
    if (fgets(str1, sizeof(str1), stdin) == NULL) {
        fprintf(stderr, "Failed to read first string.\n");
        return 1;
    }

    printf("Enter the second string:\n");
    
    if (fgets(str2, sizeof(str2), stdin) == NULL) {
        fprintf(stderr, "Failed to read second string.\n");
        return 1;
    }

    while (str1[len1] != '\0' && str1[len1] != '\n') {
        len1++;
    }
    str1[len1] = '\0';

    while (str2[len2] != '\0' && str2[len2] != '\n') {
        len2++;
    }
    str2[len2] = '\0';

    if (len1 != len2) {
        is_anagram = 0;
    } else {
        for (i = 0; i < len1; i++) {
            if (str1[i] >= 'a' && str1[i] <= 'z') {
                char_count[str1[i] - 'a']++;
            }
        }

        for (i = 0; i < len2; i++) {
            if (str2[i] >= 'a' && str2[i] <= 'z') {
                char_count[str2[i] - 'a']--;
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
        printf("Anagrams\n");
    } else {
        printf("Not anagrams\n");
    }

    return 0;
}