//Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>
int main() {
    int rows, cols;

    // Input the number of rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols]; // Declare a 2D array (matrix)
    int rowSums[rows];      // Array to store sum of each row

    // Input elements into the matrix
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        rowSums[i] = 0; // Initialize sum for each row
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
            rowSums[i] += matrix[i][j]; // Add to the row sum
        }
    }

    // Print the sum of each row
    printf("The sum of each row is:\n");
    for (int i = 0; i < rows; i++) {
        printf("Sum of row %d: %d\n", i, rowSums[i]);
    }

    return 0;
}