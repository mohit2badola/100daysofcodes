//program to rotate an array to right  by k positions
#include <stdio.h>
main() {
    int n, k;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // Declare an array of size n

    // Input elements into the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the number of positions to rotate
    printf("Enter the number of positions to rotate right: ");
    scanf("%d", &k);

    // Normalize k to avoid unnecessary rotations
    k = k % n;

    // Rotate the array to the right by k positions
    int temp[k];
    // Store the last k elements in a temporary array
    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }
    // Shift the remaining elements to the right
    for (int i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }
    // Copy the temporary array elements to the front
    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }

    // Print the rotated array
    printf("The array after rotation is:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}