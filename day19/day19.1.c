//Write a program to find the LCM of two numbers.
#include <stdio.h>
int main() {
    int a, b, lcm;

    // Input the values of a and b
    printf("Enter two positive integers a and b: ");
    scanf("%d %d", &a, &b);

    // Find the LCM using the relationship between GCD and LCM
    int x = a, y = b;
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    int gcd = x; // GCD is stored in x after the loop
    lcm = (a * b) / gcd; // Calculate LCM

    // Display the result
    printf("The LCM of %d and %d is: %d\n", a, b, lcm);

    return 0;
}