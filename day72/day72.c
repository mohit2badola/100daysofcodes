//Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.
#include <stdio.h>
int main() {
    FILE *file = fopen("info.txt", "r"); // Open file in read mode
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    char line[256];

    // Read and print each line until EOF
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    fclose(file); // Close the file
    return 0;
}