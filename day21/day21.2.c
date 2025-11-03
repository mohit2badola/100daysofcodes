//Write a program to check if a number is a perfect number.
#include <stdio.h>
int main() {
    int n, sum = 0;

    // Input the value of n
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Calculate the sum of proper divisors
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i; // Add the divisor to sum
        }
    }

    // Check if the sum of divisors is equal to the original number
    if (sum == n) {
        printf("%d is a perfect number.\n", n);
    } else {
        printf("%d is not a perfect number.\n", n);
    }

    return 0;
}