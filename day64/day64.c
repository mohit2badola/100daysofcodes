//Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
#include <stdio.h>
#include <string.h>
int lengthOfLongestSubstring(char *s) {
    int n = strlen(s);
    int maxLength = 0;

    for (int i = 0; i < n; i++) {
        int seen[256] = {0}; // ASCII character set
        int currentLength = 0;

        for (int j = i; j < n; j++) {
            if (seen[(unsigned char)s[j]] == 1) {
                break; // Repeating character found
            }
            seen[(unsigned char)s[j]] = 1; // Mark character as seen
            currentLength++;
        }

        if (currentLength > maxLength) {
            maxLength = currentLength; // Update max length if current is greater
        }
    }

    return maxLength;
}
int main() {
    char s[] = "abcabcbb";

    int result = lengthOfLongestSubstring(s);
    printf("%d\n", result);

    return 0;
}