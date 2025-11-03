//Search for an element in an array using linear search.
#include <stdio.h>
int main() {
    int n, target, found = 0;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // Declare an array of size n

    // Input elements into the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the target element to search for
    printf("Enter the element to search for: ");
    scanf("%d", &target);

    // Perform linear search for the target element
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            found = 1; // Element found
            break;
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