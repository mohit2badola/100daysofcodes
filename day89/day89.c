//Show that enums store integers by printing assigned values.
#include <stdio.h>
enum numbers {
    ONE,
    TWO,
    THREE,
    FOUR,
    FIVE
};
int main() {
    enum numbers num;

    // Print each number with its integer value
    for (num = ONE; num <= FIVE; num++) {
        printf("%d: ", num);
        switch (num) {
            case ONE:
                printf("ONE\n");
                break;
            case TWO:
                printf("TWO\n");
                break;
            case THREE:
                printf("THREE\n");
                break;
            case FOUR:
                printf("FOUR\n");
                break;
            case FIVE:
                printf("FIVE\n");
                break;
        }
    }

    return 0;
}
