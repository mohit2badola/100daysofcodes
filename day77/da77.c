//Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.
#include <stdio.h>
#include <ctype.h>
int main() {
    FILE *inputFile = fopen("input.txt", "r"); // Open input file in read mode
    if (inputFile == NULL) {
        printf("Error opening input file!\n");
        return 1;
    }

    FILE *outputFile = fopen("output.txt", "w"); // Open output file in write mode
    if (outputFile == NULL) {
        printf("Error opening output file!\n");
        fclose(inputFile);
        return 1;
    }

    char ch;
    // Read each character from input file
    while ((ch = fgetc(inputFile)) != EOF) {
        // Convert to uppercase if it's a lowercase letter
        if (islower(ch)) {
            ch = toupper(ch);
        }
        // Write the character to output file
        fputc(ch, outputFile);
    }

    fclose(inputFile);  // Close input file
    fclose(outputFile); // Close output file

    printf("Text converted to uppercase and saved to output.txt\n");
    return 0;
}
