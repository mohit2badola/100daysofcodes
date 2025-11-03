//Write a program to calculate the factorial of a number.
#include <stdio.h>
int main() {
    int n;
    long factorial = 1; // Use long long to handle large factorials

    // Input the value of n
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Calculate the factorial of n
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    // Display the result
    printf("The factorial of %d is: %lld\n", n, factorial);

    return 0;
}