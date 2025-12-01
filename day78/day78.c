//Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.
#include <stdio.h>
#include <ctype.h>
int main() {
    FILE *file = fopen("input.txt", "r"); // Open file in read mode
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    int vowelCount = 0;
    int consonantCount = 0;
    char ch;

    while ((ch = fgetc(file)) != EOF) {
        // Convert character to lowercase for uniformity
        ch = tolower(ch);

        // Check if the character is an alphabet
        if (isalpha(ch)) {
            // Check if it's a vowel
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowelCount++;
            } else {
                consonantCount++;
            }
        }
    }

    fclose(file); // Close the file

    printf("Total Vowels: %d\n", vowelCount);
    printf("Total Consonants: %d\n", consonantCount);

    return 0;
}