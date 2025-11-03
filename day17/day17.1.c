//Write a program to check if a number is an Armstrong number.
#include <stdio.h>
int main() {
    int n, original, sum = 0, digits = 0;

    // Input the value of n
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    original = n; // Store the original number for comparison

    // Count the number of digits
    int temp = n;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    // Calculate the sum of the cubes of each digit
    temp = n;
    while (temp != 0) {
        int digit = temp % 10; // Get the last digit
        int power = 1;
        for (int i = 0; i < digits; i++) {
            power *= digit; // Calculate digit^digits
        }
        sum += power; // Add to sum
        temp /= 10; // Remove the last digit from temp
    }

    // Check if the original number is equal to the sum of cubes of its digits
    if (original == sum) {
        printf("%d is an Armstrong number.\n", original);
    } else {
        printf("%d is not an Armstrong number.\n", original);
    }

    return 0;
}