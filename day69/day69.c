//Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
#include <stdio.h>
int findRepeatedElement(int arr[], int size) {
    int seen[100000] = {0}; // Assuming the elements are in the range 0 to 99999

    for (int i = 0; i < size; i++) {
        if (seen[arr[i]] == 1) {
            return arr[i]; // Repeated element found
        }
        seen[arr[i]] = 1; // Mark element as seen
    }

    return -1; // No repeated element found (should not happen as per problem statement)
}
int main() {
    int arr[] = {1, 3, 4, 2, 5, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    int repeatedElement = findRepeatedElement(arr, size);
    printf("%d\n", repeatedElement);

    return 0;
}
