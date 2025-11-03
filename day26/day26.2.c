
// *

// *
// *
// *

// *
// *
// *
// *
// *

// *
// *
// *

// *
#include <stdio.h>
int main() {
    int n;

    // Input the value of n
    printf("Enter the number of rows n: ");
    scanf("%d", &n);

    // Print the pattern
    for (int i = 0; i < n; i++) {          // Loop for each row
        for (int j = 0; j < n - i - 1; j++) { // Print leading spaces
            printf(" ");
        }
        for (int k = 0; k < i + 1; k++) {  // Print stars
            printf("*");
        }
        printf("\n");                      // Move to the next line after each row
    }

    return 0;
}