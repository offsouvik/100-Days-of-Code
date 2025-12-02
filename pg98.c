#include <stdio.h>
#include <ctype.h>

int main() {
    char name[1001];
    int i = 0;
    int len = 0;
    int last_space_index = -1;

    printf("Enter a name:\n");

    if (fgets(name, sizeof(name), stdin) != NULL) {
        
        while (name[len] != '\0' && name[len] != '\n') {
            len++;
        }
        name[len] = '\0';

        for (i = len - 1; i >= 0; i--) {
            if (name[i] == ' ') {
                last_space_index = i;
                break;
            }
        }

        printf("The initials and surname are: ");

        if (last_space_index == -1) {
            printf("%s\n", name);
        } else {
            
            if (isalpha(name[0])) {
                printf("%c.", name[0]);
            }
            
            for (i = 1; i < last_space_index; i++) {
                if (name[i] == ' ' && isalpha(name[i+1])) {
                    printf("%c.", name[i+1]);
                }
            }

            printf(" ");

            for (i = last_space_index + 1; i < len; i++) {
                printf("%c", name[i]);
            }
            
            printf("\n");
        }

    } else {
        fprintf(stderr, "Failed to read input.\n");
        return 1;
    }

    return 0;
}