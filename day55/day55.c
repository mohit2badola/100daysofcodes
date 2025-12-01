//Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.
#include <stdio.h>
int findMajorityElement(int nums[], int size) {
    int count = 0;
    int candidate = -1;

    // Phase 1: Find a candidate for majority element
    for (int i = 0; i < size; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Phase 2: Verify if the candidate is actually the majority element
    count = 0;
    for (int i = 0; i < size; i++) {
        if (nums[i] == candidate) {
            count++;
        }
    }

    if (count > size / 2) {
        return candidate; // Majority element found
    } else {
        return -1; // No majority element
    }
}
int main() {
    int nums[] = {3, 2, 3};
    int size = sizeof(nums) / sizeof(nums[0]);

    int majorityElement = findMajorityElement(nums, size);
    printf("%d\n", majorityElement);

    return 0;
}