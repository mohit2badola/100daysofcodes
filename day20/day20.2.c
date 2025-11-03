//Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>
int main() {
    int n, original, onesComplement = 0, placeValue = 1;

    // Input the binary number
    printf("Enter a binary number (as an integer): ");
    scanf("%d", &n);

    original = n; // Store the original number for display

    // Calculate the 1's complement
    while (n != 0) {
        int digit = n % 10; // Get the last digit
        int flippedDigit = (digit == 0) ? 1 : 0; // Flip the digit
        onesComplement += flippedDigit * placeValue; // Add to the result
        placeValue *= 10; // Move to the next place value
        n /= 10; // Remove the last digit from n
    }

    // Display the result
    printf("The 1's complement of %d is: %d\n", original, onesComplement);

    return 0;
}