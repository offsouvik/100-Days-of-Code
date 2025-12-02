#include <stdio.h>

int main() {
    int day, month, year;
    
    char *month_names[] = {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    printf("Enter a date in dd/mm/yyyy format:\n");

    if (scanf("%d/%d/%d", &day, &month, &year) == 3) {
        
        if (month >= 1 && month <= 12) {
            
            printf("The converted date is: %02d-%s-%04d\n", day, month_names[month - 1], year);

        } else {
            fprintf(stderr, "Invalid month. Month must be between 1 and 12.\n");
            return 1;
        }

    } else {
        fprintf(stderr, "Invalid input format. Please use dd/mm/yyyy.\n");
        return 1;
    }

    return 0;
}