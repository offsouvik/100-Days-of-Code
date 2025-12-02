#include <stdio.h>

int main() {
    char s[1001];
    int last_seen[256];
    int max_len = 0;
    int current_len = 0;
    int start_index = 0;
    int len = 0;
    int i;
    char ch;

    for (i = 0; i < 256; i++) {
        last_seen[i] = -1;
    }

    printf("Enter a string:\n");
    if (fgets(s, sizeof(s), stdin) == NULL) {
        fprintf(stderr, "Failed to read string.\n");
        return 1;
    }

    while (s[len] != '\0' && s[len] != '\n') {
        len++;
    }
    s[len] = '\0';

    for (i = 0; i < len; i++) {
        ch = s[i];

        if (last_seen[ch] >= start_index) {
            start_index = last_seen[ch] + 1;
        }

        last_seen[ch] = i;

        current_len = i - start_index + 1;

        if (current_len > max_len) {
            max_len = current_len;
        }
    }

    printf("The length of the longest substring without repeating characters is:\n");
    printf("%d\n", max_len);

    return 0;
}