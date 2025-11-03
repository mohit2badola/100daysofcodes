//Write a program to find the product of odd digits of a number.
#include <stdio.h>
int main() {
    int n;
    long product = 1; // Use long to handle large products
    int hasOddDigit = 0; // Flag to check if there is at least one odd digit

    // Input the value of n
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Calculate the product of odd digits
    while (n != 0) {
        int digit = n % 10; // Get the last digit
        if (digit % 2 != 0) { // Check if the digit is odd
            product *= digit; // Multiply to product
            hasOddDigit = 1; // Set flag to true
        }
        n /= 10; // Remove the last digit from n
    }

    // Display the result
    if (hasOddDigit) {
        printf("The product of odd digits is: %ld\n", product);
    } else {
        printf("There are no odd digits in the number.\n");
    }

    return 0;
}