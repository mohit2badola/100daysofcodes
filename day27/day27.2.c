//Write a program to print the following pattern:

//    *
//   ***
//  *****
// *******
//  *****
//   ***
//    *
#include <stdio.h>
int main() {    
    int n;

    // Input the value of n
    printf("Enter the number of rows (odd number) n: ");
    scanf("%d", &n);

    // Ensure n is odd for a symmetric pattern
    if (n % 2 == 0) {
        printf("Please enter an odd number.\n");
        return 1;
    }

    int mid = n / 2; // Middle index

    // Print the upper half of the pattern
    for (int i = 0; i <= mid; i++) {          // Loop for each row in the upper half
        for (int j = 0; j < mid - i; j++) {   // Print leading spaces
            printf(" ");
        }
        for (int k = 0; k < 2 * i + 1; k++) { // Print stars
            printf("*");
        }
        printf("\n");                         // Move to the next line after each row
    }

    // Print the lower half of the pattern
    for (int i = mid - 1; i >= 0; i--) {      // Loop for each row in the lower half
        for (int j = 0; j < mid - i; j++) {   // Print leading spaces
            printf(" ");
        }
        for (int k = 0; k < 2 * i + 1; k++) { // Print stars
            printf("*");
        }
        printf("\n");                         // Move to the next line after each row
    }

    return 0;
}