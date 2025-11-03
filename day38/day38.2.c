//Check if a matrix is symmetric.
#include <stdio.h>
int main() {
    int rows, cols, isSymmetric = 1;

    // Input the number of rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // A matrix can be symmetric only if it is square
    if (rows != cols) {
        printf("The matrix is not symmetric (not square).\n");
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

    // Check for symmetry
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0; // Not symmetric
                break;
            }
        }
        if (!isSymmetric) {
            break;
        }
    }

    // Print the result
    if (isSymmetric) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }

    return 0;
}