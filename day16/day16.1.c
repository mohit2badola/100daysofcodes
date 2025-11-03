//Write a program to convert a decimal number to binary.
#include <stdio.h>

int main() {
    int num, i;
    int binary[32];  // Array to store binary digits (32 bits for int)

    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle zero case directly
    if (num == 0) {
        printf("Binary representation: 0\n");
        return 0;
    }

    i = 0;
    while (num > 0) {
        binary[i] = num % 2;  // Store remainder
        num = num / 2;        // Divide number by 2
        i++;
    }

    printf("Binary representation: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}