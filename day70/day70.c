//Write a program to take a string input. Change it to sentence case.
#include <stdio.h>
#include <string.h>
void toSentenceCase(char *str) {
    int n = strlen(str);
    int capitalizeNext = 1; // Flag to indicate if the next character should be capitalized

    for (int i = 0; i < n; i++) {
        if (str[i] == ' ') {
            capitalizeNext = 1; // Next character should be capitalized
        } else if (capitalizeNext && str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A'); // Convert to uppercase
            capitalizeNext = 0; // Reset flag
        } else if (!capitalizeNext && str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + ('a' - 'A'); // Convert to lowercase
        } else {
            capitalizeNext = 0; // Reset flag for non-alphabetic characters
        }
    }
}
int main() {
    char str[] = "hello world! this is c programming.";

    toSentenceCase(str);
    printf("%s\n", str);

    return 0;
}
