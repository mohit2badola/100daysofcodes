//Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>  
int main() {
    int rows, cols, sum = 0;

    // Input the number of rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // A matrix can have a main diagonal only if it is square
    if (rows != cols) {
        printf("The matrix does not have a main diagonal (not square).\n");
        return 0;
    }

    int matrix[rows][cols]; // Declare a 2D array (matrix)

    // Input elements into the matrix
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate the sum of main diagonal elements
    for (int i = 0; i < rows; i++) {
        sum += matrix[i][i];
    }

    // Print the sum of main diagonal elements
    printf("The sum of the main diagonal elements is: %d\n", sum);

    return 0;
}