//Assign explicit values starting from 10 and print them.
#include <stdio.h>
enum Numbers {
    TEN = 10,
    ELEVEN,
    TWELVE,
    THIRTEEN,
    FOURTEEN,
    FIFTEEN
};
int main() {
    enum Numbers num;

    // Print each number with its integer value
    for (num = TEN; num <= FIFTEEN; num++) {
        printf("%d: ", num);
        switch (num) {
            case TEN:
                printf("TEN\n");
                break;
            case ELEVEN:
                printf("ELEVEN\n");
                break;
            case TWELVE:
                printf("TWELVE\n");
                break;
            case THIRTEEN:
                printf("THIRTEEN\n");
                break;
            case FOURTEEN:
                printf("FOURTEEN\n");
                break;
            case FIFTEEN:
                printf("FIFTEEN\n");
                break;
        }
    }

    return 0;
}
