#include <stdio.h>
#include <ctype.h>

int main() {
    char name[1001];
    int i = 0;

    printf("Enter a name:\n");

    if (fgets(name, sizeof(name), stdin) != NULL) {
        
        printf("The initials are: ");

        if (isalpha(name[0])) {
            printf("%c.", name[0]);
        }

        while (name[i] != '\0' && name[i] != '\n') {
            
            if (name[i] == ' ' && isalpha(name[i+1])) {
                printf("%c.", name[i+1]);
            }
            
            i++;
        }
        
        printf("\n");

    } else {
        fprintf(stderr, "Failed to read input.\n");
        return 1;
    }

    return 0;
}