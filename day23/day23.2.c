//Write a program to print the following pattern:
// *****
// *****
// *****
// *****
// *****
#include <stdio.h>
int main() {
    int n;

    // Input the value of n
    printf("Enter the number of rows/columns n: ");
    scanf("%d", &n);

    // Print the pattern
    for (int i = 0; i < n; i++) {          // Loop for each row
        for (int j = 0; j < n; j++) {      // Loop for each column in the row
            printf("*");                   // Print star
        }
        printf("\n");                      // Move to the next line after each row
    }

    return 0;
}