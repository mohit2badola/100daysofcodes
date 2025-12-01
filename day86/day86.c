//Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
#include <stdio.h>
enum MenuChoice {
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};
int main() {
    enum MenuChoice choice;
    int a = 10, b = 5;
    int result;

    // Test each menu choice
    for (choice = ADD; choice <= MULTIPLY; choice++) {
        switch (choice) {
            case ADD:
                result = a + b;
                printf("ADD: %d + %d = %d\n", a, b, result);
                break;
            case SUBTRACT:
                result = a - b;
                printf("SUBTRACT: %d - %d = %d\n", a, b, result);
                break;
            case MULTIPLY:
                result = a * b;
                printf("MULTIPLY: %d * %d = %d\n", a, b, result);
                break;
        }
    }

    return 0;
}
