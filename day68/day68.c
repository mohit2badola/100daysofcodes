//Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number
#include <stdio.h>
int findMissingNumber(int arr[], int size) {
    int expectedSum = size * (size + 1) / 2; // Sum of first n natural numbers
    int actualSum = 0;

    for (int i = 0; i < size; i++) {
        actualSum += arr[i]; // Sum of elements in the array
    }

    return expectedSum - actualSum; // The missing number
}
int main() {
    int arr[] = {0, 1, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int missingNumber = findMissingNumber(arr, size);
    printf("%d\n", missingNumber);

    return 0;
}
