//Print all sub-strings of a string.
#include <stdio.h>
int main()
{
    char str[100];
    int i, j, k, len = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while (str[len] != '\0')
    {
        len++;
    }
    if (len > 0 && str[len - 1] == '\n')
        len--;
    printf("All sub-strings of the string are:\n");
    for (i = 0; i < len; i++)
    {
        for (j = i; j < len; j++)
        {
            for (k = i; k <= j; k++)
            {
                putchar(str[k]);
            }
            putchar('\n');
        }
    }
    return 0;
}