//Write a program to reverse a given number.
#include <stdio.h>
int main() {
    int n, reversed = 0;

    // Input the value of n
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Reverse the number
    while (n != 0) {
        int digit = n % 10; // Get the last digit
        reversed = reversed * 10 + digit; // Append it to the reversed number
        n /= 10; // Remove the last digit from n
    }

    // Display the result
    printf("The reversed number is: %d\n", reversed);

    return 0;
}