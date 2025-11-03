//Write a program to print all the prime numbers from 1 to n.
#include <stdio.h>
int main() {
    int n;

    // Input the value of n
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Print all prime numbers from 1 to n
    printf("Prime numbers from 1 to %d are: ", n);
    for (int num = 2; num <= n; num++) { // Start from 2, the first prime number
        int isPrime = 1; // Assume the number is prime

        // Check for factors from 2 to the square root of num
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0; // Found a factor, so num is not prime
                break;
            }
        }

        // If isPrime is still 1, then num is prime
        if (isPrime) {
            printf("%d ", num);
        }
    }
    printf("\n");

    return 0;
}