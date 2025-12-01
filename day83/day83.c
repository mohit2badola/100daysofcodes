//Create an enum for months and print how many days each month has.
#include <stdio.h>
enum Months {
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};
int getDaysInMonth(enum Months month) {
    switch (month) {
        case JANUARY:
        case MARCH:
        case MAY:
        case JULY:
        case AUGUST:
        case OCTOBER:
        case DECEMBER:
            return 31;
        case APRIL:
        case JUNE:
        case SEPTEMBER:
        case NOVEMBER:
            return 30;
        case FEBRUARY:
            return 28; // Not considering leap years for simplicity
        default:
            return 0; // Invalid month
    }
}
int main() {
    enum Months month;

    // Print days in each month
    for (month = JANUARY; month <= DECEMBER; month++) {
        int days = getDaysInMonth(month);
        switch (month) {
            case JANUARY:
                printf("January has %d days.\n", days);
                break;
            case FEBRUARY:
                printf("February has %d days.\n", days);
                break;
            case MARCH:
                printf("March has %d days.\n", days);
                break;
            case APRIL:
                printf("April has %d days.\n", days);
                break;
            case MAY:
                printf("May has %d days.\n", days);
                break;
            case JUNE:
                printf("June has %d days.\n", days);
                break;
            case JULY:
                printf("July has %d days.\n", days);
                break;
            case AUGUST:
                printf("August has %d days.\n", days);
                break;
            case SEPTEMBER:
                printf("September has %d days.\n", days);
                break;
            case OCTOBER:
                printf("October has %d days.\n", days);
                break;
            case NOVEMBER:
                printf("November has %d days.\n", days);
                break;
            case DECEMBER:
                printf("December has %d days.\n", days);
                break;
        }
    }

    return 0;
}
