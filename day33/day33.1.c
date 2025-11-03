//Search in a sorted array using binary search.
#include <stdio.h>
int main() {    
    int n, target, left, right, mid, found = 0;

    // Input the size of the array
    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);

    int arr[n]; // Declare an array of size n

    // Input elements into the array
    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the target element to search for
    printf("Enter the element to search for: ");
    scanf("%d", &target);

    // Initialize left and right pointers for binary search
    left = 0;
    right = n - 1;

    // Perform binary search for the target element
    while (left <= right) {
        mid = left + (right - left) / 2; // Calculate mid index

        if (arr[mid] == target) {
            found = 1; // Element found
            break;
        } else if (arr[mid] < target) {
            left = mid + 1; // Search in the right half
        } else {
            right = mid - 1; // Search in the left half
        }
    }

    // Display the result
    if (found) {
        printf("%d is present in the array.\n", target);
    } else {
        printf("%d is not present in the array.\n", target);
    }

    return 0;
}