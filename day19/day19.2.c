//Write a program to find the sum of digits of a number.
#include <stdio.h>
int main() {
    int n, sum = 0;

    // Input the value of n
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Calculate the sum of digits
    while (n != 0) {
        int digit = n % 10; // Get the last digit
        sum += digit; // Add it to sum
        n /= 10; // Remove the last digit from n
    }

    // Display the result
    printf("The sum of digits is: %d\n", sum);

    return 0;
}