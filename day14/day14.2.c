//Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>
int main() {
    int n;
    long product = 1; // Use long long to handle large products

    // Input the value of n
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Calculate the product of even numbers from 1 to n
    for (int i = 2; i <= n; i += 2) {
        product *= i;
    }

    // Display the result
    printf("The product of even numbers from 1 to %d is: %lld\n", n, product);

    return 0;
}