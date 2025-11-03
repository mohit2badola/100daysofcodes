//Write a program to check if a number is a strong number.
#include <stdio.h>

// Function to calculate factorial of a number
int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int main() {    
    int n, original, sum = 0;

    // Input the value of n
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    original = n; // Store the original number for comparison

    // Calculate the sum of the factorials of each digit
    while (n != 0) {
        int digit = n % 10;      // Get the last digit
        sum += factorial(digit); // Add the factorial of the digit to sum
        n /= 10;                 // Remove the last digit from n
    }

    // Check if the original number is equal to the sum of the factorials of its digits
    if (original == sum) {
        printf("%d is a strong number.\n", original);
    } else {
        printf("%d is not a strong number.\n", original);
    }

    return 0;
}