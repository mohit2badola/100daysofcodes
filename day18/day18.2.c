//Write a program to find the HCF (GCD) of two numbers.
#include <stdio.h>
int main() {
    int a, b, hcf;

    // Input the values of a and b
    printf("Enter two positive integers a and b: ");
    scanf("%d %d", &a, &b);

    // Find the HCF using the Euclidean algorithm
    int x = a, y = b;
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    hcf = x;

    // Display the result
    printf("The HCF (GCD) of %d and %d is: %d\n", a, b, hcf);

    return 0;
}