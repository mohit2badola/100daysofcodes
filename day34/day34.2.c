//program to delete an element from an array
#include <stdio.h>
int main() {
    int n, element, position = -1;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // Declare an array of size n

    // Input elements into the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the element to be deleted
    printf("Enter the element to delete: ");
    scanf("%d", &element);

    // Find the position of the element to be deleted
    for (int i = 0; i < n; i++) {
        if (arr[i] == element) {
            position = i;
            break;
        }
    }

    // If the element is found, delete it by shifting elements to the left
    if (position != -1) {
        for (int i = position; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--; // Reduce the size of the array
        printf("Element %d deleted.\n", element);
    } else {
        printf("Element %d not found in the array.\n", element);
    }

    // Print the updated array
    printf("The array after deletion is:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}