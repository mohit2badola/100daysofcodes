//Write a program to check if a number is prime.
#include <stdio.h>
int main() {
    int n, isPrime = 1; // Assume the number is prime

    // Input the value of n
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Check if n is less than 2
    if (n < 2) {
        isPrime = 0; // Numbers less than 2 are not prime
    } else {
        // Check for factors from 2 to the square root of n
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = 0; // Found a factor, so n is not prime
                break;
            }
        }
    }

    // Display the result
    if (isPrime) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }

    return 0;
}