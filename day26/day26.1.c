// Write a program to print the following pattern:
//     5
//    45
//   345
//  2345
// 12345
#include <stdio.h>
int main() {
    int n;

    // Input the value of n
    printf("Enter the number of rows n: ");
    scanf("%d", &n);

    // Print the pattern
    for (int i = 1; i <= n; i++) {                // Loop for each row
        for (int j = 1; j <= n - i; j++) {        // Print leading spaces
            printf(" ");
        }
        for (int k = n - i + 1; k <= n; k++) {    // Print numbers in each row
            printf("%d", k);
        }
        printf("\n");                              // Move to the next line after each row
    }

    return 0;
}