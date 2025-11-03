//Insert an element in a sorted array at the appropriate position.
#include <stdio.h>
int main() {
    int n, element, position;

    // Input the size of the array
    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);

    int arr[n + 1]; // Declare an array of size n+1 to accommodate the new element

    // Input elements into the array
    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the element to be inserted
    printf("Enter the element to insert: ");
    scanf("%d", &element);

    // Find the appropriate position to insert the new element
    position = n; // Default position is at the end
    for (int i = 0; i < n; i++) {
        if (arr[i] > element) {
            position = i;
            break;
        }
    }

    // Shift elements to the right to make space for the new element
    for (int i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element at the found position
    arr[position] = element;

    // Print the updated array
    printf("The array after insertion is:\n");
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}