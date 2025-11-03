//Write a program to swap the first and last digit of a number.
#include <stdio.h>
int main() {    
    int n, original, firstDigit, lastDigit, numDigits = 0, powerOfTen = 1;

    // Input the value of n
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    original = n; // Store the original number for display

    // Find the last digit
    lastDigit = n % 10;

    // Find the first digit and count the number of digits
    while (n >= 10) {
        n /= 10;
        numDigits++;
        powerOfTen *= 10;
    }
    firstDigit = n; // The remaining n is the first digit
    numDigits++; // Include the first digit in the count

    // If there's only one digit, no swap needed
    if (numDigits == 1) {
        printf("The number has only one digit, no swap needed: %d\n", original);
        return 0;
    }

    // Calculate the new number after swapping
    int middlePart = original % powerOfTen / 10; // Middle part without first and last digit
    int swappedNumber = lastDigit * powerOfTen + middlePart * 10 + firstDigit;

    // Display the result
    printf("The number after swapping the first and last digit is: %d\n", swappedNumber);

    return 0;
}