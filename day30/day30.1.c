//Count even and odd numbers in an array.
#include <stdio.h>
int main() {
    int n, evenCount = 0, oddCount = 0;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // Declare an array of size n

    // Input elements into the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Count even and odd numbers in the array
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++; // Increment even count
        } else {
            oddCount++;  // Increment odd count
        }
    }

    // Display the results
    printf("The number of even elements in the array is: %d\n", evenCount);
    printf("The number of odd elements in the array is: %d\n", oddCount);

    return 0;
}