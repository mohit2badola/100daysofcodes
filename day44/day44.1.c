//Count spaces, digits, and special characters in a string.
#include <stdio.h>
int main()
{
    char str[100];
    int spaces = 0, digits = 0, specialChars = 0, i = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0')
    {
        char ch = str[i];
        if (ch == ' ')
        {
            spaces++;
        }
        else if (ch >= '0' && ch <= '9')
        {
            digits++;
        }
        else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        {
        }
        else if (ch != '\n') 
        {
            specialChars++;
        }
        i++;
    }
    printf("Number of spaces: %d\n", spaces);
    printf("Number of digits: %d\n", digits);
    printf("Number of special characters: %d\n", specialChars);
    return 0;
}