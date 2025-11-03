//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include <stdio.h>
int main() {
    int n;
    double sum = 0.0;

    // Input the value of n
    printf("Enter the number of terms n: ");
    scanf("%d", &n);

    // Calculate the sum of the series
    for (int i = 0; i < n; i++) {
        int numerator = 2 * (i + 1);       // Even numbers: 2, 4, 6, 8, ...
        int denominator = 4 * i + 3;       // Denominators: 3, 7, 11, 15, ...
        sum += (double)numerator / denominator; // Add the fraction to sum
    }

    // Display the result
    printf("The sum of the series up to %d terms is: %.2f\n", n, sum);

    return 0;
}