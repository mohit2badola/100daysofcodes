//A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.
#include <stdio.h>
int main() {
    FILE *file = fopen("numbers.txt", "r"); // Open file in read mode
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    int number;
    int sum = 0;
    int count = 0;

    // Read integers from the file and compute sum and count
    while (fscanf(file, "%d", &number) == 1) {
        sum += number;
        count++;
    }

    fclose(file); // Close the file

    if (count == 0) {
        printf("No integers found in the file.\n");
    } else {
        double average = (double)sum / count; // Calculate average
        printf("Sum: %d\n", sum);
        printf("Average: %.2f\n", average);
    }

    return 0;
}
