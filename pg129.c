#include <stdio.h>

int main() {
    FILE *fptr;
    int num;
    long long sum = 0;
    int count = 0;
    double average;

    fptr = fopen("numbers.txt", "r");

    if (fptr == NULL) {
        printf("Error: Could not open numbers.txt\n");
        return 1;
    }

    while (fscanf(fptr, "%d", &num) == 1) {
        sum = sum + num;
        count++;
    }

    if (count > 0) {
        average = (double)sum / count;
        printf("Sum = %lld\n", sum);
        printf("Average = %.2f\n", average);
    } else {
        printf("No numbers found in the file.\n");
    }

    fclose(fptr);

    return 0;
}