//Find the digit that occurs the most times in an integer number.
#include <stdio.h>
int main() {
    int n, digitCount[10] = {0}; // Array to store count of each digit (0-9)

    // Input the value of n
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Count the occurrences of each digit in the number
    while (n != 0) {
        int digit = n % 10; // Get the last digit
        digitCount[digit]++; // Increment the count for this digit
        n /= 10; // Remove the last digit from n
    }

    // Find the digit with the maximum count
    int maxCount = 0, mostFrequentDigit = -1;
    for (int i = 0; i < 10; i++) {
        if (digitCount[i] > maxCount) {
            maxCount = digitCount[i];
            mostFrequentDigit = i;
        }
    }

    // Display the result
    if (mostFrequentDigit != -1) {
        printf("The digit that occurs the most is: %d (occurs %d times)\n", mostFrequentDigit, maxCount);
    } else {
        printf("No digits found.\n");
    }

    return 0;
}
