//Reverse a string.
#include <stdio.h>
int main()
{
    char str[100], rev[100];
    int i = 0, j, len = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while (str[len] != '\0')
    {
        len++;
    }
    if (len > 0 && str[len - 1] == '\n')
        len--;
    j = len - 1;
    for (i = 0; i < len; i++)
    {
        rev[i] = str[j];
        j--;
    }
    rev[len] = '\0';
    printf("Reversed string: %s\n", rev);
    return 0;
}