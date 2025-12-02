#include <stdio.h>
#include <string.h>

enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};

int main() {
    char input[20];
    enum TrafficLight signal;

    printf("Enter traffic light color (RED, YELLOW, GREEN):\n");

    if (scanf("%s", input) == 1) {
        
        if (strcmp(input, "RED") == 0) {
            signal = RED;
        } else if (strcmp(input, "YELLOW") == 0) {
            signal = YELLOW;
        } else if (strcmp(input, "GREEN") == 0) {
            signal = GREEN;
        } else {
            fprintf(stderr, "Invalid input.\n");
            return 1;
        }

        switch (signal) {
            case RED:
                printf("Stop\n");
                break;
            case YELLOW:
                printf("Wait\n");
                break;
            case GREEN:
                printf("Go\n");
                break;
        }

    } else {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    return 0;
}