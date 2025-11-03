// *
// ***
// *****
// *******
// *********
// *******
// *****
// ***
// *
#include <stdio.h>
int main() {
    int n;

    // Input the value of n
    printf("Enter the number of rows n (odd number): ");
    scanf("%d", &n);

    // Print the upper half of the diamond
    for (int i = 0; i < (n / 2) + 1; i++) {      // Loop for each row in the upper half
        for (int j = 0; j < (n / 2) - i; j++) {  // Print leading spaces
            printf(" ");
        }
        for (int k = 0; k < (2 * i) + 1; k++) {  // Print stars
            printf("*");
        }
        printf("\n");                            // Move to the next line after each row
    }

    // Print the lower half of the diamond
    for (int i = (n / 2) - 1; i >= 0; i--) {    // Loop for each row in the lower half
        for (int j = 0; j < (n / 2) - i; j++) {  // Print leading spaces
            printf(" ");
        }
        for (int k = 0; k < (2 * i) + 1; k++) {  // Print stars
            printf("*");
        }
        printf("\n");                            // Move to the next line after each row
    }

    return 0;
}