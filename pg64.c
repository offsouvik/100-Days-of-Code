#include <stdio.h>

int main() {
    long long num;
    long long original_num;
    long long temp_num;
    int digit_counts[10] = {0};
    int digit;
    int most_frequent_digit = 0;
    int max_count = 0;
    int i;

    printf("Enter a number:\n");

    if (scanf("%lld", &num) == 1) {

        original_num = num;

        if (num < 0) {
            temp_num = -num;
        } else {
            temp_num = num;
        }

        if (temp_num == 0) {
            digit_counts[0] = 1;
        } else {
            while (temp_num > 0) {
                digit = temp_num % 10;
                digit_counts[digit]++;
                temp_num = temp_num / 10;
            }
        }

        max_count = digit_counts[0];
        most_frequent_digit = 0;

        for (i = 1; i < 10; i++) {
            if (digit_counts[i] > max_count) {
                max_count = digit_counts[i];
                most_frequent_digit = i;
            }
        }

        printf("The most frequent digit in %lld is: %d\n", original_num, most_frequent_digit);

    } else {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    return 0;
}