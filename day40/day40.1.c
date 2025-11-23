//Perform diagonal traversal of a matrix.
#include <stdio.h>
main()
{
    int a[10][10], i, j, r, c, k;
    printf("Enter number of rows and columns: ");
    scanf("%d%d", &r, &c);
    printf("Enter matrix elements:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    printf("Diagonal traversal of the matrix is:\n");
    for (k = 0; k <= r + c - 2; k++)
    {
        for (i = 0; i < r; i++)
        {
            j = k - i;
            if (j >= 0 && j < c)
                printf("%d ", a[i][j]);
        }
    }
    return 0;
}