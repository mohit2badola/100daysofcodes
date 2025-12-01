//Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.
#include <stdio.h>
int main() {
    char fileName[100];
    char newLine[256];

    // Take filename as input
    printf("Enter the file name to append text: ");
    scanf("%s", fileName);
    getchar(); // Clear newline character from buffer

    FILE *file = fopen(fileName, "a"); // Open file in append mode
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Take new line of text as input
    printf("Enter the line of text to append: ");
    fgets(newLine, sizeof(newLine), stdin);

    // Append the new line to the file
    fputs(newLine, file);

    fclose(file); // Close the file

    printf("Text appended successfully to %s\n", fileName);
    return 0;
}
