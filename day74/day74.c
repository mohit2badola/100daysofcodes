//Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
#include <stdio.h>
int main() {
    char sourceFileName[100];
    char destFileName[100];

    // Take filenames as input
    printf("Enter source file name: ");
    scanf("%s", sourceFileName);
    printf("Enter destination file name: ");
    scanf("%s", destFileName);

    FILE *sourceFile = fopen(sourceFileName, "r"); // Open source file in read mode
    if (sourceFile == NULL) {
        printf("Error opening source file!\n");
        return 1;
    }

    FILE *destFile = fopen(destFileName, "w"); // Open destination file in write mode
    if (destFile == NULL) {
        printf("Error opening destination file!\n");
        fclose(sourceFile);
        return 1;
    }

    char ch;
    // Copy content from source to destination
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    fclose(sourceFile); // Close source file
    fclose(destFile);   // Close destination file

    printf("Content copied from %s to %s successfully.\n", sourceFileName, destFileName);
    return 0;
}
