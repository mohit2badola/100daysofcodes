//Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>
int main() {
    int rows, cols, isDistinct = 1;

    // Input the number of rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // A matrix can have distinct diagonal elements only if it is square
    if (rows != cols) {
        printf("The matrix does not have distinct diagonal elements (not square).\n");
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

    // Check for distinct diagonal elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < i; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                isDistinct = 0; // Not distinct
                break;
            }
        }
        if (!isDistinct) {
            break;
        }
    }

    // Print the result
    if (isDistinct) {
        printf("The diagonal elements are distinct.\n");
    } else {
        printf("The diagonal elements are not distinct.\n");
    }

    return 0;
}