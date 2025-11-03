//Write a program to print the sum of the first n odd numbers.
#include <stdio.h>
int main() {
    int n, sum = 0;

    // Input the value of n
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Calculate the sum of the first n odd numbers
    for (int i = 0; i < n; i++) {
        sum += (2 * i + 1);
    }

    // Display the result
    printf("The sum of the first %d odd numbers is: %d\n", n, sum);

    return 0;
}