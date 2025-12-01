//Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".
#include <stdio.h>
#include <string.h>
int areAnagrams(char *s, char *t) {
    int count[26] = {0}; // Assuming only lowercase letters

    // Count frequency of each character in s
    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
    }

    // Decrease frequency based on characters in t
    for (int i = 0; t[i] != '\0'; i++) {
        count[t[i] - 'a']--;
    }

    // Check if all counts are zero
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            return 0; // Not an anagram
        }
    }

    return 1; // Anagram
}
int main() {
    char s[] = "listen";
    char t[] = "silent";

    if (areAnagrams(s, t)) {
        printf("Anagram\n");
    } else {
        printf("Not Anagram\n");
    }

    return 0;
}
