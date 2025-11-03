//Count positive, negative, and zero elements in an array.
#include <stdio.h>
int main() {
    int n, positiveCount = 0, negativeCount = 0, zeroCount = 0;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // Declare an array of size n

    // Input elements into the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Count positive, negative, and zero elements in the array
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positiveCount++; // Increment positive count
        } else if (arr[i] < 0) {
            negativeCount++; // Increment negative count
        } else {
            zeroCount++;     // Increment zero count
        }
    }

    // Display the results
    printf("The number of positive elements in the array is: %d\n", positiveCount);
    printf("The number of negative elements in the array is: %d\n", negativeCount);
    printf("The number of zero elements in the array is: %d\n", zeroCount);

    return 0;
}