//Multiply two matrices.
#include <stdio.h>
int main()
{
    int a[5][5], b[5][5], mul[5][5], i, j, k, r1, c1, r2, c2;
    printf("Enter rows and columns for first matrix: ");
    scanf("%d%d", &r1, &c1);
    printf("Enter rows and columns for second matrix: ");
    scanf("%d%d", &r2, &c2);
    if (c1 != r2)
    {
        printf("Matrices cannot be multiplied with the given dimensions.\n");
        return 0;
    }
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < r2; i++)
        for (j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);  
    for (i = 0; i < r1; i++)
        for (j = 0; j < c2; j++)
            mul[i][j] = 0;
    for (i = 0; i < r1; i++)
        for (j = 0; j < c2; j++)
            for (k = 0; k < c1; k++)
                mul[i][j] += a[i][k] * b[k][j];
    printf("Resultant matrix after multiplication:\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
            printf("%d ", mul[i][j]);
        printf("\n");
    }
    return 0;
}
