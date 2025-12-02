#include <stdio.h>

enum Color {
    RED,
    YELLOW,
    GREEN,
    NUM_COLORS 
};

int main() {
    const char *color_names[] = {"RED", "YELLOW", "GREEN"};
    int i;

    for (i = RED; i < NUM_COLORS; i++) {
        printf("%s=%d\n", color_names[i], i);
    }

    return 0;
}