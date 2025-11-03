//Write a program to print all factors of a given number.
#include <stdio.h>
int main() {
    int n;

    // Input the value of n
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Print all factors of n
    printf("Factors of %d are: ", n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}