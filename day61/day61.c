//Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.
#include <stdio.h>
void firstNegativeInEachSubarray(int arr[], int size, int k, int result[]) {
    for (int i = 0; i <= size - k; i++) {
        result[i] = 0; // Default to 0 if no negative integer is found
        for (int j = 0; j < k; j++) {
            if (arr[i + j] < 0) {
                result[i] = arr[i + j]; // First negative integer found
                break;
            }
        }
    }
}
int main() {
    int arr[] = {12, -1, -7, 8, -15, 30, 16, 28};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    int result[size - k + 1];

    firstNegativeInEachSubarray(arr, size, k, result);

    // Print the result in space separated fashion
    for (int i = 0; i < size - k + 1; i++) {
        if (i != 0) {
            printf(" ");
        }
        printf("%d", result[i]);
    }
    printf("\n");

    return 0;
}
