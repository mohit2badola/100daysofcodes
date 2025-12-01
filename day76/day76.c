//Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.
#include <stdio.h>
int main() {    
    char fileName[100];

    // Take filename as input
    printf("Enter the file name to read: ");
    scanf("%s", fileName);

    FILE *file = fopen(fileName, "r"); // Open file in read mode
    if (file == NULL) {
        printf("Error: File %s does not exist or cannot be opened.\n", fileName);
        return 1;
    }

    char ch;
    // Read and display the content of the file
    printf("Contents of %s:\n", fileName);
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    fclose(file); // Close the file

    return 0;
}
