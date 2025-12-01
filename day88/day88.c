//Print all enum names and integer values using a loop.

#include <stdio.h>
enum Colors {
    RED,
    GREEN,
    BLUE,
    YELLOW,
    ORANGE
};
int main() {
    enum Colors color;

    // Print each color with its integer value
    for (color = RED; color <= ORANGE; color++) {
        printf("%d: ", color);
        switch (color) {
            case RED:
                printf("RED\n");
                break;
            case GREEN:
                printf("GREEN\n");
                break;
            case BLUE:
                printf("BLUE\n");
                break;
            case YELLOW:
                printf("YELLOW\n");
                break;
            case ORANGE:
                printf("ORANGE\n");
                break;
        }
    }

    return 0;
}
