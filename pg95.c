#include <stdio.h>
#include <string.h>

int main() {
    char str1[1001], str2[1001];
    char temp[2002];
    int len1 = 0;
    int len2 = 0;

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
        printf("Not rotation\n");
    } else {
        
        int i = 0;
        while (str1[i] != '\0') {
            temp[i] = str1[i];
            i++;
        }
        
        int j = 0;
        while (str1[j] != '\0') {
            temp[i + j] = str1[j];
            j++;
        }
        temp[i + j] = '\0';

        
        if (strstr(temp, str2) != NULL) {
            printf("Rotation\n");
        } else {
            printf("Not rotation\n");
        }
    }

    return 0;
}