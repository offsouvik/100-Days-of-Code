#include <stdio.h>
#include <string.h>

enum Month {
    JAN, FEB, MAR, APR, MAY, JUN,
    JUL, AUG, SEP, OCT, NOV, DEC
};

int main() {
    char input[20];
    enum Month current_month;
    int found = 0;

    printf("Enter month (e.g., JAN, FEB):\n");

    if (scanf("%s", input) == 1) {
        
        if (strcmp(input, "JAN") == 0) current_month = JAN;
        else if (strcmp(input, "FEB") == 0) current_month = FEB;
        else if (strcmp(input, "MAR") == 0) current_month = MAR;
        else if (strcmp(input, "APR") == 0) current_month = APR;
        else if (strcmp(input, "MAY") == 0) current_month = MAY;
        else if (strcmp(input, "JUN") == 0) current_month = JUN;
        else if (strcmp(input, "JUL") == 0) current_month = JUL;
        else if (strcmp(input, "AUG") == 0) current_month = AUG;
        else if (strcmp(input, "SEP") == 0) current_month = SEP;
        else if (strcmp(input, "OCT") == 0) current_month = OCT;
        else if (strcmp(input, "NOV") == 0) current_month = NOV;
        else if (strcmp(input, "DEC") == 0) current_month = DEC;
        else {
            fprintf(stderr, "Invalid month abbreviation.\n");
            return 1;
        }

        switch (current_month) {
            case FEB:
                printf("28 or 29 days\n");
                break;
            case APR:
            case JUN:
            case SEP:
            case NOV:
                printf("30 days\n");
                break;
            default:
                printf("31 days\n");
                break;
        }

    } else {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    return 0;
}