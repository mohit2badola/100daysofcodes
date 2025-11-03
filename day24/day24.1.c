//Write a program to print the following pattern:
// *
// **
// ***
// ****
// *****
#include <stdio.h>
int main() {
    int n;

    // Input the value of n
    printf("Enter the number of rows n: ");
    scanf("%d", &n);

    // Print the pattern
    for (int i = 1; i <= n; i++) {        // Loop for each row
        for (int j = 1; j <= i; j++) {    // Loop to print stars in each row
            printf("*");                   // Print star
        }
        printf("\n");                      // Move to the next line after each row
    }

    return 0;
}