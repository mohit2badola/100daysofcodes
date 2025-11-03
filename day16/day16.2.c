//Write a program to check if a number is a palindrome.
#include <stdio.h>
int main() {
    int n, original, reversed = 0;

    // Input the value of n
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    original = n; // Store the original number for comparison

    // Reverse the number
    while (n != 0) {
        int digit = n % 10; // Get the last digit
        reversed = reversed * 10 + digit; // Append it to the reversed number
        n /= 10; // Remove the last digit from n
    }

    // Check if the original number is equal to the reversed number
    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }

    return 0;
}