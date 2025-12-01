// Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
#include <stdio.h>
int maxSumOfSubarrays(int arr[], int size, int k) {
    if (k > size || k <= 0) {
        return 0; // Invalid subarray size
    }

    int maxSum = 0;
    int currentSum = 0;

    // Calculate the sum of the first subarray of size k
    for (int i = 0; i < k; i++) {
        currentSum += arr[i];
    }
    maxSum = currentSum;

    // Slide the window over the array
    for (int i = k; i < size; i++) {
        currentSum += arr[i] - arr[i - k]; // Add next element and remove the first element of the previous window
        if (currentSum > maxSum) {
            maxSum = currentSum; // Update max sum if current sum is greater
        }
    }

    return maxSum;
}
int main() {
    int arr[] = {2, 1, 5, 1, 3, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    int result = maxSumOfSubarrays(arr, size, k);
    printf("%d\n", result);

    return 0;
}